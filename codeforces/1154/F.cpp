#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   10000003
// Function to check if x is power of 2



int dp[20]={0};

int32_t main() 
{
int t=1;
// cin>>t;
while(t--){

int n,m,k;
cin>>n>>m>>k;
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+1+n);
n=min(n,k);
int x[m+1],y[m+1];
for(int i=1;i<=m;i++){
  cin>>x[i]>>y[i];
}

int pre[k+1]={0};
int dp[k+1]={0};
for(int i=1;i<=n;i++)pre[i]=pre[i-1]+a[i];
for(int i=1;i<=n;i++)dp[i]=INF;
dp[0]=0;


for(int i=1;i<=n;i++){
  // loop through all the sales discounts;;
  dp[i]=dp[i-1]+a[i];// take it
   for(int j=1;j<=m;j++)
   {
    if(x[j]<=i)// this discount is valid;
    dp[i]=min(dp[i],dp[i-x[j]]+pre[i]-pre[i-x[j]+y[j]]);
   }
}







cout<<dp[k];
tr;

  


}

}
