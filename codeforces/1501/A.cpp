/* not_stable but Believer */
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
void Not_Stable(){

int n;cin>>n;
int a[n+1],b[n+1],t[n+1];
F(i,n){
  cin>>a[i]>>b[i];
}
F(i,n)cin>>t[i];

int ans=0;
int cur=0;
a[0]=0,
b[0]=0;
F(i,n)
{
  int ex=a[i]-b[i-1]+t[i];
  int time=b[i]-a[i];
  cur+=ex;
  int tm=b[i]-a[i];
  if(tm%2==0)tm/=2;
  else tm=(tm/2)+1;

  if(i==n)
  {
    break;
  }
  cur+=tm;

  if(cur<=b[i])cur=b[i];


}



 cout<<cur;
 tr;
}



int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}