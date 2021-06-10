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


int n;cin>>n;
int a[n+1];
for(int i=1;i<=n;i++)
{
cin>>a[i];
}

int cost=0;
int same=0;
for(int i=1;i<=n;i++)
 cost+=(abs(a[i]-1));


vector<int> vc;
for(int i=1;i<=n;i++){
  if(a[i]<0)vc.pb(a[i]);
  if(a[i]==0)++same;
}

sort(vc.begin(),vc.end(),greater<int>());
int mi=cost;
int odd=0;
int cost1=0;

for(auto sd:vc)
{
  cost1+=abs(1+sd);
  cost-=abs(sd-1);
  ++odd;
  if(odd%2==0)mi=min(mi,cost+cost1);
}

if(odd%2==1 and same>=1){
  mi=min(mi,cost+cost1);
}

cout<<mi;
tr;













} 
}


