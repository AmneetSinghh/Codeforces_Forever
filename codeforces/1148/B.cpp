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
io;
int t=1;
// cin>>t;
while(t--){
/* Practice Never Stops */

int n,m,ta,tb,k;
cin>>n>>m>>ta>>tb>>k;
int a[n+1];
int b[m+1];
F(i,n)cin>>a[i];
vector<int> vc;
F(i,m)cin>>b[i],vc.pb(b[i]);
int ans=-1;

if(k>=n){cout<<"-1\n";continue;}

for(int i=1;i<=n;i++)
{
    int val=a[i]+ta;
    auto lo=lower_bound(vc.begin(),vc.end(),val)-vc.begin();
    if(lo+k<vc.size())
    {
    	ans=max(ans,vc[lo+k]+tb);
    }
    else {ans=-1;break;}


    --k;
    if(k==-1)break;
}


db(ans);





}
}