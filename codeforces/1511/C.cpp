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



void Not_Stable()
{    
int n,q;
cin>>n>>q;
int a[n+1];
int dp[51]={0};
int mx=0;

F(i,n){
  int val;
  cin>>val;
  a[i]=val;
  if(!dp[val])dp[val]=i;
  mx=max(a[i],mx);
}


while(q--){
  int t;
  cin>>t;
  int val=dp[t];


// for(int i=1;i<=mx;i++)cout<<dp[i]<<" ";

//   tr;
// cout<<"ater\n";
  dp[t]=1;
for(int i=1;i<=mx;i++){
  if(i==t)continue;
  if(dp[i]<val)dp[i]++;
}
// for(int i=1;i<=mx;i++)cout<<dp[i]<<" ";

//   tr;
// cout<<"before\n";



  cout<<val<<" ";


}



}
 
 
 
int32_t main() {
    io;


   int g=1;
    // cin>>g;
    while (g--)Not_Stable();
    return 0;
}