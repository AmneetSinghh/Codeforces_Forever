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
  
int h,n;
cin>>h>>n;
int a[n+1];
int pre[n+1]={0};
for(int i=1;i<=n;i++)
{
  cin>>a[i];
  pre[i]=pre[i-1]+a[i];
  if(h+pre[i]<=0){cout<<i;return 0;}
}
if (pre[n] >= 0) {
    cout << -1 << endl;
    return 0;
  }
 
 int l=0,r=h/(-pre[n])+5,mid,ans=0;

 while(l<=r)
 {
  int flag=0;
  mid=(l+r)/2;
  for(int i=1;i<=n;i++)
  {
     if(h+(pre[n]*mid)+pre[i]<=0)
     {
      ans=mid*n+i;
      flag=1;
      break;
     }
  }

  if(flag)r=mid-1;
  else l=mid+1;


 }
 cout<<ans;
 tr;



}
}
