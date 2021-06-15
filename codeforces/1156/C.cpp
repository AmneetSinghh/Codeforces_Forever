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
// cin>>t;
while(t--){
/* Practice Never Stops */
	int n,z;
	cin>>n>>z;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];

sort(a+1,a+1+n);


int ans=0;
int vis[n+1]={0};
int i=n/2,j=n;
if(n%2==1)++i;

while(i>=1 and j>=1)
{
if(vis[j]==1)--j;
else
{
    if(a[j]-a[i]>=z)
	{
		vis[i]=1;
		vis[j]=1;
		--j,--i;
		++ans;
	}
	else
	{
		--i;
	}
}

}



cout<<ans;
tr;

}
}