#include<bits/stdc++.h>
#define int long long int
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
//    cin>>t;
    while(t--){
/* Practice Never Ends */
string a,b;
int res=0;
cin>>a;
cin>>b;
int i=0;
int n=a.size();
 
 a+='X';
 b+='X';
 
for(int i=0;i<n;i++)
{
  if(a[i]=='X' and b[i]=='X')continue;
  if(a[i]=='0' and b[i]=='0')
  {
  	if(a[i+1]=='0')a[i+1]='X',++res;
  	else if(b[i+1]=='0')b[i+1]='X',++res;
  	else {}
  	continue;
  }
    if(a[i+1]=='0' and b[i+1]=='0')a[i+1]='X',b[i+1]='X',res++;
}
 
 
cout<<res;
tr;
 
    }
}