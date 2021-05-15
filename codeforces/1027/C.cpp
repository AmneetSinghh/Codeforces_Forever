// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   100005
 

 
 
int32_t main() 
{
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
int t=1;
cin>>t;
while(t--){


 

int n;cin>>n;
int a[n+1];
unordered_map<int,int> hash,one;
vector<int>two;
for(int i=1;i<=n;i++)cin>>a[i],hash[a[i]]++;
for(auto sd:hash){
  if(sd.second>=4)one[sd.first]++;
  else if(sd.second>=2)two.push_back(sd.first);
}

if(one.size()){
  int ans=INF;
  for(auto sd:one){
    ans=min(sd.first,ans);
  }
  for(int i=1;i<=4;i++)cout<<ans<<" ";
    tr;
}
else
{
  sort(two.begin(),two.end());
  double mx=INF*1.0;
  int l=-1,r=-1;
  n=two.size();
  for(int i=0;i<two.size();i++)
  {
    int lo=i;
    int left=-1;
    int right=n;
    if(i-1>=0)left=i-1;
    if(i+1<n)right=i+1;

    // for left;
    if(left>=0)
    {
      int first=two[left];
      int second=two[lo];
      double ans=pow(2*(first+second),2)/(first*second);
      if(ans<mx)mx=ans,l=first,r=second;
    }
    if(right<n){
      int first=two[right];
      int second=two[lo];
      double ans=pow(2*(first+second),2)/(first*second);
       if(ans<mx)mx=ans,l=first,r=second;
    }
    
  }

  cout<<l<<" "<<r<<" "<<l<<" "<<r;
  tr; 
}

}
}