// Either up or down pracice never ends  :not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   200005

int vis[1005],a[30][30];

int32_t main() 
{
int t=1;
// cin>>t;
while(t--){

int n,x,flag=1;
  cin>>n;
  for(int i=1;i<=n*n;i++)
  {
    cin>>x;
    vis[x]++;
  }
  for(int i=1;i<=n/2;i++)
  for(int j=1;j<=n/2;j++)
  {
    int k;
    for(k=1;k<=1000;k++)
    if(vis[k]>=4)break;
    if(k>1000)flag=0;
    vis[k]-=4;
    a[i][j]=a[n-i+1][j]=a[i][n-j+1]=a[n-i+1][n-j+1]=k; 
  }
  if(n%2)
  {
    // fill 2 ma ;
    for(int i=1;i<=n/2;i++)
    {
      int k;
      for(k=1;k<=1000;k++)
      if(vis[k]>=2)break;
      if(k>1000)flag=0;
      vis[k]-=2;
      a[n/2+1][i]=a[n/2+1][n-i+1]=k;
 
      for(k=1;k<=1000;k++)
      if(vis[k]>=2)break;
      if(k>1000)flag=0;
      vis[k]-=2;
      a[i][n/2+1]=a[n-i+1][n/2+1]=k;      
    }
    for(int i=1;i<=1000;i++)
    if(vis[i]==1)
    {
      a[n/2+1][n/2+1]=i;
      break; 
    }
  }
  if(!flag)puts("NO"),exit(0);
  puts("YES");
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<n;j++)printf("%d ",a[i][j]);
    printf("%d\n",a[i][n]);
  }

}
}