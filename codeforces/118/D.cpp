// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 100000000
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 10001
// directions

void we_have_choices()
{
 int n,h,k1,k2;
 cin>>n>>h>>k1>>k2;
 int dp[101][101][12][12];
  memset(dp, 0, sizeof dp);

 f(i,n+1){f(j,h+1){f(k,k1+1){f(l,k2+1){
 	 int ans;
 	if(i+j==0)ans=1;// men + horse==0 means no answer
 	else
 	{
 		ans=0;
 		if(i>0 && k>0)ans=(ans+ dp[i-1][j][k-1][k2])%mod;	
 		if(j>0 && l>0)ans=(ans+ dp[i][j-1][k1][l-1])%mod;	
 	}
 	dp[i][j][k][l]=ans;
 }

}
}
}
 cout<<dp[n][h][k1][k2];
 tr;
 }
 
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)we_have_choices();
    return 0;
}