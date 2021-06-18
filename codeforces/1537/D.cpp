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

int flag=0;
int check(int n)
{
	
int c=0;
int t=n;
while(n%2==0)
{
	n/=2;
	++c;
}

if(n==1 and pow(2,c)==t)
{
	flag=1;
}	

return c;
}
int32_t main()
{
io;
int t=1;
cin>>t;
while(t--){
/* Practice Never Ends */


 flag=0;
	int n;cin>>n;
int dp[11]={0};
dp[1]=1;
dp[2]=1;
dp[3]=1;
dp[4]=0;
dp[5]=1;
dp[6]=0;
dp[7]=1;
dp[8]=1;
dp[9]=1;
dp[10]=0;


int c=check(n);
 if(n<=10)
{
	if(dp[n]==1)cout<<"Bob";
	else cout<<"Alice";
}
else if(flag==1)
{
if(c%2==0)cout<<"Alice";
else cout<<"Bob";
}
else
{
	if(n%2==0)cout<<"Alice";
	else cout<<"Bob";
}



tr;


}
}



