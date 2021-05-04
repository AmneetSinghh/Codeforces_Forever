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
int t=1;
// cin>>t;
while(t--){
  
int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];

map<int,vector<pair<int,int>>  > vc;
for(int i=1;i<=n;i++)
{
  int sum=0;
  for(int j=i;j>=1;j--)
  {
   sum+=a[j];
  vc[sum].pb({j,i});
  }
}



pair<int,vector<ipair>> ans;
for(auto sd:vc)
{
int last=INF;
pair<int,vector<ipair>> current_ans;
sort(sd.second.begin(),sd.second.end());
for(int i=sd.second.size()-1;i>=0;i--)
{
  int l=sd.second[i].first;
  int r=sd.second[i].second;
  if(r<last)
  {
    current_ans.second.pb(sd.second[i]);
    current_ans.first++;
    last=l;
  }
}


ans=max(current_ans,ans);
}

cout<<ans.first<<"\n";
for(auto sd:ans.second)cout<<sd.first<<" "<<sd.second<<"\n";

}
}