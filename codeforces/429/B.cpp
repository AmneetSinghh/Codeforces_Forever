// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long int 
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
#define N 10005
// directions
int xx[5]={0,0,1,-1};
int yy[5]={1,-1,0,0};
vector<int > G[N],L[N];



void we_have_choices()
{
   int n,m;
   cin>>n>>m;
   int a[n+1][m+1];
   F(i,n)F(j,m)cin>>a[i][j];
   int dp[4][1050][1050];

   F(i,n)F(j,m)
    dp[0][i][j]=a[i][j]+max(dp[0][i-1][j],dp[0][i][j-1]);

   FO(i,n)FO(j,m)
    dp[1][i][j]=a[i][j]+max(dp[1][i+1][j],dp[1][i][j+1]);

    FO(i,n)F(j,m)
    dp[2][i][j]=a[i][j]+max(dp[2][i+1][j],dp[2][i][j-1]);

     F(i,n)FO(j,m)
    dp[3][i][j]=a[i][j]+max(dp[3][i-1][j],dp[3][i][j+1]);

    int ans=0;


    F(i,n)F(j,m){
        if(i==1 || i==n || j==1 || j==m)continue;
        ans=max(ans,dp[0][i-1][j]+dp[1][i+1][j]+dp[2][i][j-1]+dp[3][i][j+1]);
        ans=max(ans,dp[0][i][j-1]+dp[1][i][j+1]+dp[3][i-1][j]+dp[2][i+1][j]);
    }
    cout<<ans;tr;

   
}





int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)we_have_choices();
    return 0;
}