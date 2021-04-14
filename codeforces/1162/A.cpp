/* not_stable */
/* Practice to Improve */
#include<bits/stdc++.h>
#define int unsigned long long
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
#define inf 7e18
using namespace std; 

void Not_Stable(){



int n,h,m;
cin>>n>>h>>m;
int dp[n+1]={0};
F(i,n)dp[i]=100;
F(i,m){
  int l,r,x;
  cin>>l>>r>>x;
  for(int j=l;j<=r;j++){dp[j]=min(x,dp[j]);}
}

int ans=0;
for(int i=1;i<=n;i++){
  if(dp[i]==100)ans+=(h*h);
  else ans+=(dp[i]*dp[i]);
}
cout<<ans;
tr;


}
 
 
int32_t main() {
    io;
   int g=1;
    // cin>>g;
    while (g--)Not_Stable();
    return 0;
}