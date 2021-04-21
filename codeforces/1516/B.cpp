#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 10000000000009
using namespace std;
const int maxn=100005;
 
  
int32_t main() {
    int t=1;
    cin>>t;
    while(t--){

int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];

int dp[n+1][n+1];
int flag=0;
for(int i=1;i<=n;i++)
{
    for(int j=i;j<=n;j++){
        if(i==j)dp[i][j]=a[i];
        else dp[i][j]=(a[j]^dp[i][j-1]);
    }
}

// one cut;
for(int i=1;i+1<=n;i++){
    if(dp[1][i]==dp[i+1][n])flag=1;
}


// two cut;
for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
        if(i-1>=1 &&  j+1<=n && dp[1][i-1]==dp[i][j] && dp[i][j]==dp[j+1][n])flag=1;       }
}

if(flag)cout<<"YES";
else cout<<"NO";


tr;



    }
     
}