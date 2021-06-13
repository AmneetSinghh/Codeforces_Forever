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

int vis[101][101];
char a[101][101];

int n,m;
int pos=0;
void dfs(int i,int j,char prev)
{
if(i<=0 or i>n or j>m or j<=0 or vis[i][j]==1)return;


vis[i][j]=1;
if(a[i][j]!='.' and a[i][j]!=prev){pos=1;return;}


if(a[i][j]=='.')
{
	a[i][j]=prev;
}
char next;

if(a[i][j]=='R')next='W';
else next='R';



dfs(i+1,j,next);
dfs(i-1,j,next);
dfs(i,j+1,next);
dfs(i,j-1,next);



}

int32_t main()
{
io;
int t=1;
cin>>t;
while(t--){
/* Practice Never Stops */
pos=0;
cin>>n>>m;
int flag=0;
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		cin>>a[i][j];
		if(a[i][j]!='.')flag=1;
	}
}

if(flag==0)a[1][1]='R';

memset(vis,0,sizeof vis);
	for(int i=1;i<=n;i++)
	{
      for(int j=1;j<=m;j++){

      	if(vis[i][j]==0 and a[i][j]!='.')dfs(i,j,a[i][j]);
      }
	}

if(pos==1)cout<<"NO\n";
else{
	cout<<"YES";
	tr;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)cout<<a[i][j];
			tr;
	}
}









}
}