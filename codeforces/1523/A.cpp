#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define mod 1000000007
#define inf 1e18
using namespace std; 
void db(int a) {cout<<a<<"\n";}
void db(int a,int b){ cout<<a<<" "<<b<<"\n";}
void db(int a,int b,int c) {cout<<a<<" "<<b<<" "<<c<<"\n"; }
void db(int a,int b,int c,int d) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";}
void db(int a,int b,int c,int d,int e){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";}
void db(int a,int b,int c,int d,int e,int f) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g,int h){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<"\n"; }



const int maxn=100005;





int32_t main()
{
int t=1;
cin>>t;
while(t--){
/* Practise Never Ends */



int n,m;
cin>>n>>m;
string s;cin>>s;


while(m)
{

string temp=s;
int flag=0;
for(int i=0;i<s.size();i++)
{
	if(s[i]=='0')
	{
		int c=0;
		if(i-1>=0 and s[i-1]=='1')++c;
		if(i+1<n and s[i+1]=='1')++c;

		if(c==1)flag=1,temp[i]='1';
	}
}

if(flag==0)break;
s=temp;
--m;

}

cout<<s;
tr;









 
} 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 