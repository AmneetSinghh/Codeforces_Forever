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






string s;cin>>s;
string t;cin>>t;

string first="";first+=s[0],first+=s[1];
int hour1=stoi(first);
first="";first+=s[3],first+=s[4];
int min1=stoi(first);

 first="";first+=t[0],first+=t[1];
int hour2=stoi(first);
first="";first+=t[3],first+=t[4];
int min2=stoi(first);

// db(hour1,hour2,min1,min2);
// tr;

int get=(hour2-hour1)*60;

if(get>=1)
{
  if(min1>=min2)get-=(min1-min2);
  else get+=(min2-min1);
}
else get+=(min2-min1);


// db(get);
// tr;

int i=0;
int h=hour1,m=min1;
while(i<get/2)
{
 ++m;
 if(m>=60)m=0,h++;
 ++i;
}


string a=to_string(h);
string b=to_string(m);

if(a.size()==1)a="0"+a;
if(b.size()==1)b="0"+b;


cout<<a<<":"<<b;
tr;







} 
}
 
 
 