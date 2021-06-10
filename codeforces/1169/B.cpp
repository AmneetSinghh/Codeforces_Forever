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
/* Practice Never Stops */


int n,m;
cin>>n>>m;
int a[m+1],b[m+1];
for(int i=1;i<=m;i++)cin>>a[i]>>b[i];
int first=a[1];
int second=b[1];
int third=0,fourth=0;
int flag=0;
for(int i=1;i<=m;i++){
  set<int> s;
  s.insert(first),s.insert(second),s.insert(a[i]),s.insert(b[i]);


  if(s.size()==4)third=a[i],fourth=b[i];

} 


// db(first,second,third,fourth);
if(third==0)cout<<"YES";
else
{
// 1 2 3 4; now check; evey combination;
vector<int> vc;
vc.pb(first),vc.pb(second),vc.pb(third),vc.pb(fourth);

for(int i=0;i<vc.size();i++){
  for(int j=0;j<vc.size();j++){
   int ff=vc[i];
   int ss=vc[j];
   int count=0;
   for(int i=1;i<=m;i++){
    if(a[i]==ff or a[i]==ss)goto gt;
    if(b[i]==ff or b[i]==ss)goto gt;
    break;
    gt:
    ++count;
   }

     if(count==m)flag=1;   
   }


  }


if(flag==1)cout<<"YES";
else cout<<"NO";






}


tr;



}
}


