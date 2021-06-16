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

int n;cin>>n;
vector<pair<int,pair<int,int>>> one,two;
F(i,n)
{
	int u,v;
	cin>>u>>v;
	if(u<v)
	{
     one.pb({u,{v,i}});
	}
	else if(u>v)
	{
    two.pb({u,{v,i}});
	}
}


sort(one.begin(),one.end());
sort(two.begin(),two.end());

if(one.size()>two.size())
{
	cout<<one.size();
	tr;
	reverse(one.begin(),one.end());
	for(auto sd:one)cout<<sd.second.second<<" ";
		tr;
}
else
{
	cout<<two.size();
	tr;
	// reverse(one.begin(),one.end());
	for(auto sd:two)cout<<sd.second.second<<" ";
		tr;	
}















}
}