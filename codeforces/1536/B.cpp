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
/* Practice Never Ends */



  int n;cin>>n;
  string s;cin>>s;
map<string,int> hash;
  for(int i=0;i<n;i++){
    string v="";
    for(int j=i;j<n;j++){
      v+=s[j];
      hash[v]++;
    }
  }

int flag=0;
string ans="";
for( char i='a';i<='z';i++){
  string v="";
  v+=i;

    if(!hash[v]){ans=i;flag=1;break;}
}



if(flag==1){cout<<ans<<"\n";continue;}

for( char i='a';i<='z';i++){
  string first="";
  first+=i;
for( char j='a';j<='z';j++){


if(!hash[first+j]){ans=first+j;flag=1;break;}
}
if(flag==1)break;
}


if(flag==1){cout<<ans<<"\n";continue;}

for( char i='a';i<='z';i++){
for( char j='a';j<='z';j++){
for( char k='a';k<='z';k++){
  string first="";
  first+=i;
  first+=j;
  first+=k;
if(!hash[first]){ans=first;flag=1;break;}

}
if(flag==1)break;

}
if(flag==1)break;

}



if(flag==1){cout<<ans<<"\n";continue;}

for( char i='a';i<='z';i++){
for( char j='a';j<='z';j++){
for( char k='a';k<='z';k++){
for( char l='a';l<='z';l++){

string first="";
first+=i;
first+=j;
first+=k;
first+=l;
if(!hash[first]){ans=first;flag=1;break;}

}
if(flag==1)break;

}
if(flag==1)break;

}
if(flag==1)break;

}



if(flag==1){cout<<ans<<"\n";continue;}









} 
}
 
 
 