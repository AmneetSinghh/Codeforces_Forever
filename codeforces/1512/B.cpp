/* not_stable */
/* Practice to Improve */
#include<bits/stdc++.h>
#define int int
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
#define mod 998244353
using namespace std;
const int maxn=100005;

void Not_Stable()
{

int n;
cin>>n;
int m=n;
char a[n+1][m+1];
char b[n+1][m+1];
int r=0,c=0;
int r1=0,c1=0;
F(i,n)F(j,m)
{


cin>>a[i][j],b[i][j]=a[i][j];
if(r==0 && c==0 && a[i][j]=='*')r=i,c=j;
else if(r1==0 && c1==0 && a[i][j]=='*')r1=i,c1=j;
}


if(r==r1){
  if(r-1>=1){
    a[r-1][c]='*';
    a[r1-1][c1]='*';
  }
  else{
    a[r+1][c]='*';
    a[r1+1][c1]='*';
  }
}
else if(c==c1){
   if(c-1>=1){
    a[r][c-1]='*';
    a[r1][c1-1]='*';
  }
  else{
    a[r][c+1]='*';
    a[r1][c1+1]='*';
  }
}
else{


  a[r][c1]='*';
  a[r1][c]='*';
}


F(i,n){
  F(j,m)cout<<a[i][j];
  tr;
}



}



int32_t main() {
    io;
    int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}