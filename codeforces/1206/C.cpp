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
int dp[2*n+1]={0};
int i=1,j=2*n;
int k=1,m=2*n;
if(n%2==0)cout<<"NO";
else
{
  while(k<=n)
  {
   if(k%2==1)
   {
   dp[k]=i;//      1 2 3 4 5 6 7 8 9 10 11 12 13 14
   dp[k+n]=i+1;
   dp[m]=j;
   dp[m-n]=j-1;
   }
   else
   {
   dp[k]=j;//      1 2 3 4 5 6 7 8 9 10 11 12 13 14
   dp[k+n]=j-1;
   dp[m]=i;
   dp[m-n]=i+1;
   }

   i+=2,j-=2;    
++k,--m;
  }
  cout<<"YES";
  tr;
  F(i,2*n)cout<<dp[i]<<" ";
  tr;
}






} 
}


