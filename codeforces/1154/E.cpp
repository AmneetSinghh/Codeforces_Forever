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

int n,k;cin>>n>>k;
int a[n+1];
vector<pair<int,int>> vc;
for(int i=1;i<=n;i++)cin>>a[i],vc.pb({a[i],i});
sort(vc.begin(),vc.end());
reverse(vc.begin(),vc.end());
int prev[n+1]={0},next[n+1]={0};
prev[1]=1;
next[n]=n;
for(int i=2;i<=n;i++)prev[i]=i-1;
for(int i=1;i<=n-1;i++)next[i]=i+1;
int vis[n+1]={0};
int dp[n+1]={0};
int flag=0;

// for(int i=1;i<=n;i++)cout<<prev[i]<<" "<<next[i]<<"\n";
for(auto sd:vc)
{
int val=sd.first;
int id=sd.second;
if(vis[id])continue;
// left and right;
int first=k+1;
int second=k+1;
int i=id;
int j=id;
// set only previous
// only want the last i-> ;
while(i>=1 && first>=1 && vis[i]==0)
{
  vis[i]=1;
  dp[i]=flag+1;
  i=prev[i];
  --first;
}

vis[id]=0;
while(j<=n && second>=1 && vis[j]==0)
{
  vis[j]=1;
  dp[j]=flag+1;
  j=next[j];
  --second;
}


prev[j]=i;
next[i]=j;
flag^=1;

}






for(int i=1;i<=n;i++)cout<<dp[i];
  tr;


  


}

}
