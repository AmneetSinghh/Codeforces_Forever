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


vector<ipair> G[MAXN];
int vis[MAXN];
unordered_map<int,ipair> vc;
int ans=0;
int H[MAXN];
void dfs(int s)
{
  vis[s]=1;
  int first=vc[s].first;
  int second=vc[s].second;
if(!H[first] || !H[second])
{
    ++ans;
    int aa=0,bb=0;
    if(!H[first])aa=1;
    if(!H[second])bb=1;
    H[first]=1,H[second]=1;
  
  if(aa==1){
   for(auto c:G[first])
  {
    if(!vis[c.second])dfs(c.second);
  }
   
  }
  if(bb==1){
  for(auto c:G[second])
  {
    if(!vis[c.second])dfs(c.second);
  }

  }


}




}
int32_t main() 
{
int t=1;
// cin>>t;
while(t--){


/* After making logic think for best and easy way of implementation, don't be rush  */
int n,k;
cin>>n>>k;
for(int i=1;i<=k;i++)
{
  int a,b;
  cin>>a>>b;
  G[a].pb({b,i});
  G[b].pb({a,i});
  vc[i]={a,b};
}

memset(vis,0,sizeof vis);
memset(H,0,sizeof H);
for(int i=1;i<=k;i++)// number of guests;
{
    if(!vis[i])
    {
      dfs(i);
    }
}



cout<<k-ans;
tr;
}}




