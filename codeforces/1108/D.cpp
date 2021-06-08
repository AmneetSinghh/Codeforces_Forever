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
int n;
cin>>n;
string s;cin>>s;
int ans=0;
int i=0;
while(i<n)
{
   char cur=s[i];
   int c=0;
   int j=i;
   while(j<n and s[j]==cur) {++c,++j; }

   if(c%2==1 and c>=3)
   {
    for(int k=i+1;k<j;k+=2){
      if(s[k-1]=='R')s[k]='G';
      if(s[k-1]=='G')s[k]='R';
      if(s[k-1]=='B')s[k]='R';
    }
    ans+=(c/2);
   }
   else if(c%2==0)
   {
      if(j==n){
      if(s[j-2]=='R')s[j-1]='G';
      if(s[j-2]=='G')s[j-1]='R';
      if(s[j-2]=='B')s[j-1]='R';
       }
       else
       {
        if(s[j-2]!='R' and s[j]!='R')s[j-1]='R';
        if(s[j-2]!='G' and s[j]!='G')s[j-1]='G';
        if(s[j-2]!='B' and s[j]!='B')s[j-1]='B';
       }


    for(int k=j-3;k>=i+1;k-=2)
    {
      if(s[k-1]=='R')s[k]='G';
      if(s[k-1]=='G')s[k]='R';
      if(s[k-1]=='B')s[k]='R';
    }
    ans+=(c/2);
   }



   i=j;

}





cout<<ans;
tr;
cout<<s;
tr;
 

} 
}
 
 
 