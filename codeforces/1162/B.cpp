/* not_stable */
/* Practice to Improve */
#include<bits/stdc++.h>
#define int unsigned long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define oo (1<<30)
#define mod 1000000007
#define inf 7e18
using namespace std; 

void Not_Stable(){


int n,m;
cin>>n>>m;
int a[n+1][m+1],b[n+1][m+1];
F(i,n)F(j,m)cin>>a[i][j];
F(i,n)F(j,m)cin>>b[i][j];


F(i,n){F(j,m){
  int v=a[i][j];
  int v1=b[i][j];
  a[i][j]=min(a[i][j],b[i][j]);
  b[i][j]=max(v,v1);
}
}

int flag=0;
for(int i=1;i<=n;i++)
{
  for(int j=1;j<=m;j++){
    if(j-1>=1 && b[i][j]<=b[i][j-1])flag=1;
    if(j-1>=1 && a[i][j]<=a[i][j-1])flag=1;
    if(i-1>=1 && b[i][j]<=b[i-1][j])flag=1;
    if(i-1>=1 && a[i][j]<=a[i-1][j])flag=1;
  }

}



if(flag)cout<<"Impossible";
else cout<<"Possible";

tr;
}
 
 
int32_t main() {
    io;
   int g=1;
    // cin>>g;
    while (g--)Not_Stable();
    return 0;
}