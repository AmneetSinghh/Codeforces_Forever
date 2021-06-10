#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define mod 1000000007
#define inf 1000000000000000
using namespace std; 
void db(int a) {cout<<a<<"\n";}
void db(int a,int b){ cout<<a<<" "<<b<<"\n";}
void db(int a,int b,int c) {cout<<a<<" "<<b<<" "<<c<<"\n"; }
void db(int a,int b,int c,int d) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";}
void db(int a,int b,int c,int d,int e){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";}
void db(int a,int b,int c,int d,int e,int f) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g,int h){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<"\n"; }
const int maxn=300005;
int n,m,a[maxn];
bool check(int x)
{
  int pre=0;
  for(int i=1;i<=n;i++){
    if(a[i]==pre)continue;
    if(a[i]<pre and a[i]+x<pre)return false;
    if(a[i]<pre and a[i]+x>=pre)continue;// we can make current;
    if(a[i]>pre)
    {
      // check can we make to the current;
      if(a[i]+x>=m)
      {
        int y=a[i]+x-m;
        if(y>=pre)continue;// we can make ot current
      }
      pre=a[i];// this big.
    }
  }

  return true;
}

int32_t main()
{
int t=1;
// cin>>t;
while(t--){
/* Practice Never Stops */

cin>>n>>m;
for(int i=1;i<=n;i++)cin>>a[i];

int l=0,r=1e12;
while(l<r){
  int mid=(l+r)/2;
  if(check(mid))r=mid;
  else l=mid+1;
}
db(r);


}
}


