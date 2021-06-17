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
string s;cin>>s;

int first=-1,second=-1,third=-1,fourth=-1;
for(int i=0;i<s.size();i++){
	if(s[i]=='['){first=i;break;}
}

for(int i=0;i<s.size();i++){
	if(s[i]==':' and i>first){second=i;break;}
}


// db(first,second);
for(int i=s.size()-1;i>=0;i--){
	if(s[i]==']' and i>second){third=i;break;}
}

for(int i=s.size()-1;i>=0;i--){
	if(s[i]==':' and i<third and i>second){fourth=i;break;}
}

// db(third,fourth);

if(first==-1 or second==-1 or fourth==-1 or third==-1)cout<<"-1";
else{
	int c=0;
	for(int i=second+1;i<=fourth-1;i++)
	{
		if(s[i]=='|')++c;
	}
	cout<<4+c;
}


tr;




}
}