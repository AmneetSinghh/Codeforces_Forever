/* not_stable */
/* Practice to Improve */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define oo (1<<30)
#define mod 1000000007
#define inf 1e18
using namespace std; 
const int maxn=200005;

int dp[maxn][12];
int calc(int m,int val){
  if(m==0)return 0;
 if(dp[m][val]!=-1)return dp[m][val];
 dp[m][val]=0;// because we wnt to return 0 or -1;
 if(m>=10-val)
  dp[m][val]=(1+calc(m-(10-val),1)%mod+calc(m-(10-val),0)%mod)%mod;
 return dp[m][val];
}
void Not_Stable()
{

int n,m;
cin>>n>>m;
int ans=0;
while(n){
  int tik=calc(m,n%10);
 ans=(ans+1+tik)%mod;
  n/=10;
}

cout<<ans;
tr;

}
 
 
 
 
int32_t main() {
    io;
    for(int i=0;i<maxn;i++)
      for(int j=0;j<=9;j++)dp[i][j]=-1;
   int g=1;

    cin>>g;
    while (g--)Not_Stable();
    return 0;
}