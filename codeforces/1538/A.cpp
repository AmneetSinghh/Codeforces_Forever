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
cin>>t;
while(t--){
/* Practice Never Stops */


int n;
cin>>n;
int a[n+1];
int mi=INT_MAX;
int mx=0;
F(i,n)cin>>a[i],mi=min(a[i],mi),mx=max(a[i],mx);
int ind=-1,ind1=-1;
F(i,n){
  if(a[i]==mi)ind=i;
  if(a[i]==mx)ind1=i;
}


// db(ind,ind1);

int cost=min({max(ind1,ind),min(ind,ind1)+(n-(max(ind,ind1))+1),n-min(ind1,ind)+1});
// int cost1=min({,min(ind,ind1)+(n-(max(ind,ind1))+1)});
cout<<cost;
tr;








}
}


