// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define ld long double
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 998244353
#define INF 1e18
using namespace std;
#define MAXN   300005
 

vector<int> G[MAXN];
int vis[MAXN]={0};
int flag=0;
int dp[MAXN]={0};
string str;

// check if their is a cycle;;
void dfs(int s,char ch)// if we take max as this character;
{
  vis[s]=1;
  for(auto c:G[s])
  {
    if(!vis[c])
    {
      dfs(c,ch);
    }
    else if(vis[c]==1)flag=1;
    dp[s]=max(dp[c],dp[s]);

  }
  vis[s]=2;
  if(str[s-1]==ch)dp[s]++;
}



int32_t main() 
{
int t=1;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */

int n,m;
cin>>n>>m;
cin>>str;
for(int i=1;i<=m;i++)
{
  int u,v;
  cin>>u>>v;
  G[u].pb(v);
}
int mx=0;
// I think we have to check for every charactwer;
for(char ch='a';ch<='z';ch++)
{
memset(vis,0,sizeof vis);
memset(dp,0,sizeof dp);
for(int i=1;i<=n;i++)
{
  if(!vis[i])
  {
    dfs(i,ch);
  }
}

for(int i=1;i<=n;i++)mx=max(mx,dp[i]);
}



if(flag==1)cout<<"-1";
else cout<<mx;


tr;




}}
 