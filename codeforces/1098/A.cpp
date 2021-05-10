// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 998244353
#define INF 1e18
using namespace std;
#define MAXN   100005



vector<int> G[MAXN];
int a[MAXN];
int dp[MAXN];
int ans[MAXN];
int flag=0;
void dfs(int s,int p,int val)
{
 if(a[s]!=-1 and a[s]<val)flag=1;
 if(a[s]!=-1)val=max(a[s],val);
 for(auto c:G[s]){
  if(c!=p)
  {
     dfs(c,s,val);
  } 
 }
}


void find(int s,int p)
{
 for(auto c:G[s])
 {
  if(c!=p)
  {
     find(c,s);
     if(dp[c]!=-1)dp[s]=min(dp[s],dp[c]);
  } 
 }
  if(a[s]!=-1)dp[s]=min(dp[s],a[s]);
}




void dfs1(int s,int p,int sum)
{
 if(dp[s]==INF)ans[s]=0;
 else{
  ans[s]=dp[s]-sum;
 }
 for(auto c:G[s]){
  if(c!=p)
  {
     dfs1(c,s,sum+ans[s]);
  } 
 }
}
int32_t main() 
{
int t=1;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */

int n;
cin>>n;
for(int i=2;i<=n;i++)
{
  int v;
  cin>>v;
  G[v].pb(i);
}
for(int i=1;i<=n;i++)cin>>a[i],dp[i]=INF;
dfs(1,0,-1);
if(flag==1)cout<<"-1\n";
else
{
    find(1,0);
    dfs1(1,0,0);
    int ac=0;
    for(int i=1;i<=n;i++){
      ac+=ans[i];
    }
    cout<<ac;
    tr;
}

}}




