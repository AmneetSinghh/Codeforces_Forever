/*Code by : Harry_Singh*/
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define F(i,n) for(int i=1;i<=n;i++)
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
// directions
int xx[5]={0,0,1,-1};
int yy[5]={1,-1,0,0};

void we_have_choices()
{
  int n,m;
  cin>>n>>m;
  char a[n+1][m+1];
  f(i,n)f(j,m)cin>>a[i][j];
  
  int c=0;
  for(int i=0;i<=m-2;i++)
  {
  	if(a[n-1][i]!='R')c++;
  }
  
  for(int i=0;i<=n-2;i++)
  {
  	if(a[i][m-1]!='D')c++;
  }
  cout<<c;tr;
}



int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("ok.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)we_have_choices();
    return 0;


}