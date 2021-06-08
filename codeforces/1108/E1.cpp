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


int32_t main()
{
int t=1;
// cin>>t;
while(t--){
/* Practice Never Ends */




int n,m;
cin>>n>>m;
int a[n+1],l[m+1],r[m+1];
for(int i=1;i<=n;i++)cin>>a[i];
vector<pair<int,pair<int,int> > > vc[401];
vector<pair<int,pair<int,int> > > p;
for(int i=1;i<=m;i++)cin>>l[i]>>r[i],p.push_back({i,{l[i],r[i]}});
for(int i=1;i<=n;i++)
{
 for(auto sd:p){
  int l=sd.second.first;
  int r=sd.second.second;
  if(i>=l and i<=r);
  else vc[i].push_back({sd.first,{l,r}});
 }
}

// for(int i=1;i<=n;i++){
//   cout<<"-> "<<a[i]<<"- > "<<i;
//   tr;
//   for(auto sd:vc[i])cout<<sd.first<<" "<<sd.second.first<<" "<<sd.second.second<<"\n";
//     tr;
// }

int ans=0;
int ind=-1;
int mx=INT_MIN,mi=INT_MAX;
for(int i=1;i<=n;i++)mx=max(mx,a[i]),mi=min(a[i],mi);
ans=mx-mi;


for(int i=1;i<=n;i++)
{
    int b[n+1];
    for(int j=1;j<=n;j++)b[j]=a[j];
    for(auto sd:vc[i]){
      int l=sd.second.first;
      int r=sd.second.second;
      for(int j=l;j<=r;j++)b[j]--;
    }


 int mx=INT_MIN;
 int  mi=INT_MAX;
  for(int j=1;j<=n;j++)mi=min(mi,b[j]),mx=max(b[j],mx);
  if(mx-mi>ans)ans=mx-mi,ind=i;// take i as max;

// cout<<"new-> "<<i<<"\n";
// cout<<mx<<" "<<mi<<"\n";
// for(int j=1;j<=n;j++)cout<<b[j]<<" ";
// tr;
}

if(ind==-1)cout<<ans<<"\n"<<0<<"\n";
else
{
  cout<<ans;
  tr;
  cout<<vc[ind].size();tr;
  for(auto sd:vc[ind])cout<<sd.first<<" ";
    tr;
}




} 
}
 
 
 