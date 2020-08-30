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

	int n,m,a[5001],u;
	double v;
	cin>>n>>m;
	F(i,n)cin>>a[i]>>v;


	int dp[n+2];
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
      dp[i]=1;
      for(int j=1;j<i;j++)
        if(a[i]>=a[j]  && dp[i]<dp[j]+1)dp[i]=dp[j]+1;
	}

	int mx=0;
	F(i,n)mx=max(dp[i],mx);
	
	cout<<n-mx;
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