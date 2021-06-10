#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define ll long long
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

 int max(int i,int j)
 {
  if(i>=j)return i;
  return j;
 }
int32_t main()
{
int t=1;
cin>>t;
while(t--){
/* Practice Never Stops */





int n,l,r;
cin>>n>>l>>r;
vector<int> vc;
int a[n+1];
F(i,n)cin>>a[i],vc.pb(a[i]);
int cost=0;
sort(vc.begin(),vc.end());
for(int i=0;i<vc.size();i++)
{
  // cout<<"cur\n";
  // db(vc[i]);
  if(vc[i]>r)continue;
  if(vc[i]<l)
  {
  auto lo=lower_bound(vc.begin(),vc.end(),l-vc[i])-vc.begin();
  auto ro=upper_bound(vc.begin(),vc.end(),r-vc[i])-vc.begin();
  --ro;
  if(lo<=i)lo=i+1;

  // cout<<"first\n";
  // db(lo,ro);
  // tr;
  cost+=max((ro-lo+1),0ll);
  }
  else
  {
    // a[i]>=l
  auto ro=upper_bound(vc.begin(),vc.end(),r-vc[i])-vc.begin();
  --ro;
  // cout<<"second\n";
  // db(ro);
  // tr;
  if(ro<=i)continue;
  cost+=max((ro-i),0ll);
  }
}



cout<<cost;
tr;






}
}


