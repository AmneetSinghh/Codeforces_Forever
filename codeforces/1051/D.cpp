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
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 998244353
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 100001
// directions


void Pencho()
{
	/*
	ww
	wb
	bw
	bb
	*/
  int n,k;
  cin>>n>>k;
  int dp[1005][2005][6]; // [column,component,state]
  f(i,1000)f(j,2000)f(k,5)dp[i][j][k]=0;

  dp[1][1][0]=1;
  dp[1][2][1]=1;
  dp[1][2][2]=1;
  dp[1][1][3]=1;
  f_a(2,i,n)
  {
     F(j,2*i){// 2*i because we are addding at most 2 component by adding a column
     	dp[i][j][0]=(dp[i-1][j][0]+dp[i-1][j][1]+dp[i-1][j][2]+dp[i-1][j-1][3])%mod;
     	dp[i][j][3]=(dp[i-1][j][3]+dp[i-1][j][2]+dp[i-1][j][1]+dp[i-1][j-1][0])%mod;
     	dp[i][j][1]=(dp[i-1][j-1][0]+dp[i-1][j-1][3]+dp[i-1][j-2][2]+dp[i-1][j][1])%mod;
     	dp[i][j][2]=(dp[i-1][j-1][0]+dp[i-1][j-1][3]+dp[i-1][j-2][1]+dp[i-1][j][2])%mod;

     }

  }
  cout<<(dp[n][k][0]+dp[n][k][1]+dp[n][k][2]+dp[n][k][3])%mod;
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
    while (g--)Pencho();
    return 0;
}