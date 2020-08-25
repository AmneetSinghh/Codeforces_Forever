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
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 10001
// directions

void we_have_choices()
{
  int n,k;
  cin>>n>>k;
  int a[n+1],b[n+1];
  F(i,n-1)cin>>a[i];
  F(i,n-1)cin>>b[i];

  int dp[n+3][4];
  f(i,n+1)f(j,2)dp[i][j]=0;
  cout<<"0 ";
  for(int i=1;i<=n-1;i++){
  	dp[i+1][0]=min({dp[i][0]+a[i],dp[i][1]+a[i]});
  	if(i==1)dp[i+1][1]=b[i]+k;
  	else
  	{
  		int first=dp[i][0]+b[i]+k;
  		int second=dp[i][1]+b[i];
  		dp[i+1][1]=min({first,second});
  	}
    cout<<min({dp[i+1][1],dp[i+1][0]})<<" ";
  }



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