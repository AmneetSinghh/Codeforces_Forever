// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   1004
int32_t main() 
{
int t=1;
// cin>>t;
while(t--){


/* After making logic think for best and easy way of implementation, don't be rush  */



int n,m;
cin>>n>>m;
swap(n,m);
int a[n+1][m+1];
for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++)
    cin>>a[i][j];

int dp[m+1]={0};
for(int i=1;i<=n;i++){
  for(int j=1;j<=m;j++){
    dp[j]+=a[i][j];
  }
}

int ans=n;
vector<int> vc;
for(int i=1;i<=m-1;i++)
{
   // check for the first;

  int first=dp[i];
  int second=dp[m];
  int res=0;
  vector<int> temp;
  vector<ipair> order;
  for(int j=1;j<=n;j++)order.pb({a[j][m]-a[j][i],j});
  sort(order.begin(),order.end());
  reverse(order.begin(),order.end());
  for(auto sd:order)
  {
    if(first<second)
    {
      first-=a[sd.second][i];
      second-=a[sd.second][m];
      res++;
      temp.pb(sd.second);
    }
  }
   if(res<=ans)ans=res,vc=temp;

}

cout<<ans;
tr;
for(auto sd:vc)cout<<sd<<" ";
tr; 



}}