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


int dp[maxn];
void Not_Stable()
{


int n;
cin>>n;
int a[n+1];
F(i,n)cin>>a[i];
int val=a[1];
for(int i=2;i<=n;i++){
val&=a[i];
}
int c=0;
F(i,n){
  if(a[i]==val)++c;
}
if(c<2)cout<<"0";
else{


  int first=dp[n-2];
  int second=(c*(c-1))%mod;
  cout<<((first%mod)*(second%mod))%mod;

}

tr;
}
 
 
 
 
int32_t main() {
    io;
dp[0]=1;
dp[1]=1;
for(int i=2;i<maxn;i++){
dp[i]=((dp[i-1]%mod)*(i%mod))%mod;
dp[i]%=mod;
}

    int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}