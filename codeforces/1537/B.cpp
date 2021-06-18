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
cin>>t;
while(t--){
/* Practice Never Ends */

int n,m,ff,ss;
cin>>n>>m>>ff>>ss;

vector<pair<int,int>> vc;

vc.pb({1,m});
vc.pb({1,1});
vc.pb({n,m});
vc.pb({n,1});
int r=0,c=0,r1=0,c1=0,mi=0;
for(int i=0;i<4;i++){
	for(int j=0;j<4;j++)
	{
		int x1=vc[i].first;
		int y1=vc[i].second;
		int x2=vc[j].first;
		int y2=vc[j].second;
		// cout<<"new\n";


		int val=(abs(ss-y1)+abs(ff-x1))+  (abs(y1-y2)+abs(x1-x2)) +  (abs(ss-y2)+abs(ff-x2));
				// db(x1,y1,x2,y2,val);

		if(val>=mi)
		{
			mi=val;			
			r=x1;
			c=y1;
			r1=x2;
			c1=y2;
		}


	}
}

db(r,c,r1,c1);


}
}



