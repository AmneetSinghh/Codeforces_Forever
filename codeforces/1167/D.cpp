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




int n;
cin>>n;
string s; cin>>s;
vector<pair<int,string>> vc;
int dp[n+1]={0};
for(int i=0;i<=n;i++)dp[i]=2;
int o=0,c=0;
string res="";
int mx=0;
int pre[n+1]={0};
for(int i=0;i<n;i++)
{
if(s[i]=='(')++o;
else --o;
res+=s[i];
mx=max(o,mx);
pre[i]=o;
if(o==0)
{
	vc.pb({mx,res});
	res="";
	mx=0;
}

}


// for(auto sd:vc)cout<<sd.first<<" "<<sd.second<<"\n";
int k=0;
for(auto sd:vc){
	int d=sd.first;
	string res=sd.second;
	int get=(d+1)/2;// get is the maximum lift;
	stack<int> st;
	// how many reds;
	for(int i=0,j=k;i<res.size();i++,j++)
	{
		if(get==0)break;
		if(res[i]=='(')
		{
			if(st.size()<get)
			{
              dp[j]=0;
              st.push(0);
			}
		}
		else
		{
			if(st.size()>=1 and pre[j]==st.size()-1)
			{
				dp[j]=0;
				st.pop();
			}
		}
	}
	for(int i=0,j=k;i<res.size();i++,j++){
		if(dp[j]==2)dp[j]=1;
	}


	k+=res.size();


}



for(int i=0;i<n;i++)cout<<dp[i];
tr;
}
}