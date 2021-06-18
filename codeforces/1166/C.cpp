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
/* Practice Never Ends */
int n;
cin>>n;
int a[n+1];
map<int,int> store;
set<int> s;
vector<int> vc;
for(int i=1;i<=n;i++)cin>>a[i],a[i]=abs(a[i]),s.insert(a[i]),store[a[i]]++;
int i=0;
map<int,int> down;
int zero=0;
if(*s.begin()==0)s.erase(s.begin()),zero++;
int prev=0;
for(auto sd:s)
{
  if(i==0)down[sd]=store[sd];
  else
  {
  	down[sd]=store[sd]+prev;
  }
++i;
  prev=down[sd];
}


for(auto sd:s)vc.pb(sd);
sort(vc.begin(),vc.end());
int ans=0;
for(auto sd:vc)
{
	int val=store[sd];
	ans+=max(0ll,((val*(val-1))/2));/// with same thing;
}

for(int i=0;i<vc.size();i++)
{
	auto lo=lower_bound(vc.begin(),vc.end(),vc[i]*2)-vc.begin();
	int cut=down[vc[i]];
	int total=store[vc[i]];
	if(lo==vc.size())--lo;
	if(vc[lo]>vc[i]*2)--lo;
	if(lo==i)continue;
	if(lo>i)
	{
	ans+=max(0ll,(down[vc[lo]]-cut)*total);		
	}
}


if(zero==1)ans+=max(0ll,((store[0]*(store[0]-1))/2));
db(ans);




}
}



