// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 998244353
#define INF 1e18
using namespace std;
#define MAXN   300005


vector<int> G[MAXN];
int vis[MAXN];
int dp[MAXN];
int flag;
int one=0,zero=0,c=0;
void dfs(int s,int bit)
{
  vis[s]=1;
  dp[s]=bit;
  if(bit==0)++zero;
  else ++one;
  ++c;
  for(auto c:G[s]){
    if(!vis[c]) dfs(c,bit^1);
    else
    {
      if(dp[c]!=bit^1)flag=1;
    }
  }
}

int32_t main() 
{
int t=1;
cin>>t;
while(t--){


/* After making logic think for best and easy way of implementation, don't be rush  */
int n,m;
cin>>n>>m;
for(int i=1;i<=m;i++){
  int a,b;
  cin>>a>>b;
  G[a].pb(b);
  G[b].pb(a);
}
for(int i=1;i<=n;i++)vis[i]=0,dp[i]=0;

int ans=0;

for(int i=1;i<=n;i++)
{
  one=0,zero=0,flag=0,c=0;
  if(!vis[i])
  {
    dfs(i,0);
    if(flag==1)break;
    if(c==1)
    {
      if(ans==0)ans=3;
      else ans*=3;
      ans%=mod;
    }
    else
    {
         int first=0,second=0;
         for(int k=1;k<=one;k++){
          if(first==0)first=1;
          first*=2;
          first%=mod;
         }
         for(int k=1;k<=zero;k++){
          if(second==0)second=1;
          second*=2;
          second%=mod;
         }

         first+=second;
         first%=mod;
         if(first>=1){
          if(ans==0)ans=1;
         }
         ans*=first;
         ans%=mod;
    }

  }
}
for(int i=1;i<=n;i++)G[i].clear();
if(flag==1){cout<<"0\n";continue;}

cout<<ans;
tr;

}}