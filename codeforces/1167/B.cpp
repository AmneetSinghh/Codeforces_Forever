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






int ask(int a,int b)
{
	cout<<"? "<<a<<" "<<b;
	cout<<endl;
	int val;
	cin>>val;
	return val;
}
int32_t main()
{
io;
int t=1;
// cin>>t;
while(t--){
/* Practice Never Stops */



vector<int> vc;
vc.pb(4);vc.pb(8);vc.pb(15);vc.pb(16);vc.pb(23);vc.pb(42);
map<int,vector<int> > hash;
int n=vc.size();
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
      hash[vc[i]*vc[j]].push_back(vc[i]);
      hash[vc[i]*vc[j]].push_back(vc[j]);
	}
}
// for(auto sd:hash){
// 	db(sd.first);
// 	cout<<"\n";
// 	for(auto c:hash[sd.first])cout<<c<<" ";
// 		cout<<"\n";
// }

int dp[n+1]={0};
int first=ask(1,2);
int second=ask(2,3);



// cout<<first<<" "<<second<<"\n";

map<int,int> hp;
for(auto sd:hash[first])hp[sd]++;
for(auto sd:hash[second])hp[sd]++;
for(auto sd:hp){
	if(sd.second==2)dp[2]=sd.first;
}


// for(auto sd:hp)cout<<sd.first<<" "<<hash.second<<"\n";

for(auto sd:hp){
	if(sd.first*dp[2]==first)dp[1]=sd.first;
	if(sd.first*dp[2]==second)dp[3]=sd.first;
}


hp.clear();
first=ask(4,5);
second=ask(5,6);


for(auto sd:hash[first])hp[sd]++;
for(auto sd:hash[second])hp[sd]++;
for(auto sd:hp){
	if(sd.second==2)dp[5]=sd.first;
}

for(auto sd:hp){
	if(sd.first*dp[5]==first)dp[4]=sd.first;
	if(sd.first*dp[5]==second)dp[6]=sd.first;
}


cout<<"! ";
for(int i=1;i<=n;i++)cout<<dp[i]<<" ";
	cout<<endl;


}
}