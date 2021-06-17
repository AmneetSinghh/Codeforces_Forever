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


bool comp(pair<pair<int,int>,int> &a,pair< pair<int,int>,int>  &b)
{
	if(a.first.first<b.first.first)return true;
	if(a.first.first==b.first.first)
	{
		if(a.first.second>b.first.second)return true;
	}
	return false;
}

int32_t main()
{
io;
int t=1;
cin>>t;
while(t--){
/* Practice Never Stops */
int n;
cin>>n;
vector<pair<pair<int,int>,int> > vc;
vector<int> ans;
for(int i=1;i<=n;i++){
	int l,r;
	cin>>l>>r;
vc.pb({{l,r},i});

}

sort(vc.begin(),vc.end(),comp);
int r=0;
int i=0;
int flag=0;
int ind=0;
int dp[n+1]={0};

for(auto sd:vc)
{
	if(i==0)ans.pb(1),r=max(sd.first.second,r);
	else if(r>=sd.first.first)ans.pb(1),	r=max(sd.first.second,r);
	else flag=1;
	++i;

if(flag==1)dp[sd.second]=2;
else dp[sd.second]=1;

}
int k=0;
if(flag==0){cout<<"-1\n";continue;}
F(i,n)cout<<dp[i]<<" ";
tr;

}
}