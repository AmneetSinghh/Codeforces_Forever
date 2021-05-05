// Either up or down pracice never ends  :not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   300005
int a[MAXN];
int par[MAXN];
int red=0;
int blue=0;
vector<int> vc[MAXN];
int vis[MAXN]={0};
int dp[MAXN][3];
void dfs(int s ,int p)
{
  vis[s]=1;
  par[s]=p;
  for(auto c:vc[s])
  {
    if(!vis[c])
    {
    dfs(c,s);
    dp[s][0]+=dp[c][0];
    dp[s][1]+=dp[c][1];
    }

  }

  if(a[s]==1)dp[s][0]++;
  else if(a[s]==2)dp[s][1]++;
  else{}
}



int32_t main() 
{
int t=1;
// cin>>t;
while(t--){

int n;
cin>>n;
memset(dp,0,sizeof dp);
for(int i=1;i<=n;i++)
{
  cin>>a[i];
  if(a[i]==1)red++;
  else if(a[i]==2)blue++;
}
int ans=0;
vector<pair<int,int>> e;
for(int i=1;i<=n-1;i++){
  int u,v;
 cin>>u>>v;
 vc[u].pb(v);
 vc[v].pb(u);
 e.pb({u,v});
}

dfs(1,0);
for(auto sd:e){
  int u=sd.first;// parent
  int v=sd.second;// child
  if(par[v]!=u)swap(u,v);
  int rr=red-dp[v][0];
  int bb=blue-dp[v][1];
  if((rr>=1 and bb>=1)   ||  (dp[v][0]>=1 and dp[v][1]>=1));
  else ans++;
}


cout<<ans;
tr;
}
}