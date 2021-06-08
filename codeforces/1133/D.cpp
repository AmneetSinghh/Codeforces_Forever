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



/*


1
-8
-9

*/

int32_t main()
{
int t=1;
// cin>>t;
while(t--){
/* Practice Never Ends */



int n;cin>>n;
long double a[n+1],b[n+1];
F(i,n)cin>>a[i];
F(i,n)cin>>b[i];
map<long double,int > hash;
int some=0;
for(int i=1;i<=n;i++)
{
 if(a[i]==0 and b[i]==0){some++;continue;}
 else if(b[i]==0){hash[0]++;continue;}
 else if(a[i]==0)continue;
 else
 {
   long double val=b[i]/(long double)a[i];
// cout<<val<<" ";
 hash[val*(-1.0)]++;
 }

}
int mx=0;
for(auto sd:hash){
  mx=max(sd.second,mx);
}
db(mx+some);


} 
}
 
 
 