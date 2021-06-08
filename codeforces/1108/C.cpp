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

string s;
int n;
int check(string val)
{
  int c=0;
  for(int i=0;i<n;i++)
  {
    if(s[i]!=val[i])++c;
  }
  return c;
}
int32_t main()
{
int t=1;
// cin>>t;
while(t--){
/* Practice Never Ends */

  cin>>n;
  cin>>s;
  string first="";
  string second="";
  string third="",fourth="",fifth="",sixth="";
  for(int i=1;i<=n/3;i++){
    first+="RGB";
    second+="RBG";
    third+="GBR";
    fourth+="GRB";
    fifth+="BRG";
    sixth+="BGR";
  }

  if(n%3==1)
  {
  first+="R",second+="R";
  third+="G",fourth+="G";
  fifth+="B",sixth+="B";
  }
  else if(n%3==2)
  {
   first+="RG",second+="RB";
  third+="GB",fourth+="GR";
  fifth+="BR",sixth+="BG";   
  }


int mi=min({check(first),check(second),check(third),check(fourth),check(fifth),check(sixth)});


cout<<mi;
tr;
if(mi==check(first))cout<<first;
else if(mi==check(second))cout<<second;
else if(mi==check(third))cout<<third;
else if(mi==check(fourth))cout<<fourth;
else if(mi==check(fifth))cout<<fifth;
else cout<<sixth;

tr;

} 
}
 
 
 