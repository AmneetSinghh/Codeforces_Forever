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
io;
int t=1;
cin>>t;
while(t--){
/* Practice Never Ends */

int n;
cin>>n;
int a[n+1];
F(i,n)cin>>a[i];

sort(a+1,a+1+n);
int mi=INT_MAX;
for(int i=2;i<=n;i++){
	int val=abs(a[i]-a[i-1]);
	if(val<mi)mi=val;
}

int first=0,second=0;
int start=0,end=0;
int dp[n+1];
for(int i=2;i<=n;i++){
   int val=abs(a[i]-a[i-1]);
   if(val==mi){first=a[i-1],second=a[i],start=i-1,end=i;break;}
}

// db(first,second,start,end);
dp[1]=first;
dp[n]=second;
int k=end+1;
int i=2;
     while(k<=n)
     {
       dp[i]=a[k];
       ++i,++k;
     }

k=1;
     while(k<=start-1)
     {
       dp[i]=a[k];
       ++i,++k;
     }
F(i,n)cout<<dp[i]<<" ";
tr;

}
}



