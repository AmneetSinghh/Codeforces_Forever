// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 10000000000
using namespace std;
#define MAXN   5010
 
int n,m;
vector<int> one,zero;
int dp[MAXN][MAXN];
// i=ones, j=zeros, 
int calc(int i,int j)// count is the number of assigned;
{
 if(i==n)return 0;
 if(j>=m)return INT_MAX;
 if(dp[i][j]!=-1)return dp[i][j];
 // not take current;
 dp[i][j]=calc(i,j+1);
 // take it;
 dp[i][j]=min(dp[i][j],abs(one[i]-zero[j])+calc(i+1,j+1));
 return dp[i][j];
}
int32_t main() 
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
int t=1;
// cin>>t;
while(t--){



cin>>n;
int a[n+1];
memset(dp,-1,sizeof dp);
for(int i=1;i<=n;i++)
{
  cin>>a[i];
  if(a[i]==1)one.pb(i);
  else zero.pb(i);
}
n=one.size();
m=zero.size();
// I think we have to assign every one to zero, with minium cost;
cout<<calc(0,0);

}
}