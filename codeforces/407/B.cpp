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
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 100001
// directions

void Pencho()
{
	int n;
	cin>>n;
	int a[n+1];
	F(i,n)cin>>a[i];
	int dp[n+1]={0},prefix[n+1]={0};
	for(int i=1;i<=n;i++)
	{
      if(a[i]==i)prefix[i]=(prefix[i-1]+2)%mod;
      else prefix[i]=(((((((prefix[i-1]%mod)-(prefix[a[i]-1]%mod))+mod)%mod)+2)%mod)+prefix[i-1])%mod;

      // cout<<prefix[i]<<" "<<a[i]<<" ";
      // tr;
      dp[i]=prefix[i]%mod;
	}
	cout<<dp[n];
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