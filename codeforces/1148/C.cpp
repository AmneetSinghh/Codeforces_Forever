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
int a[n+1];
int pos[n+1];
vector<pair<int,int>> vc;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	pos[a[i]]=i;
}

int dp[n+1];
int one=1;
int first=n/2;
for(int i=1;i<=n;i+=2)
{
dp[i]=first;
dp[i+1]=first+one;
one+=2;
--first;
}
// F(i,n)cout<<dp[i]<<" ";
int k=1;
while(k<=n)
{


int i=dp[k];
	// First case;
	int val=a[i];
	int p=pos[i];
	// cout<<i<<" "<<val<<" "<<p<<"\n";

	if(i<=n/2)
	{



	// cout<<"first\n";
	if(p<i)
	{
		int first=a[p];// current char
		int last=a[n];// last char;
		swap(a[p],a[n]);
		vc.pb({p,n});
		swap(pos[a[p]],pos[a[n]]);
		// currnet is in last;
		swap(a[i],a[n]);
		vc.pb({i,n});
		swap(pos[a[i]],pos[a[n]]);

	}
	else if(p>i)
	{
		if(p-i>=n/2)
		{
		swap(a[i],a[p]);
		vc.pb({i,p});
		swap(pos[a[i]],pos[a[p]]);			
		}
		else
		{
			// 3 steps;  - - - - - -
			swap(a[p],a[1]);
			vc.pb({p,1});
			swap(pos[a[1]],pos[a[p]]);
			swap(a[1],a[n]);
			vc.pb({1,n});
			swap(pos[a[1]],pos[a[n]]);
			swap(a[i],a[n]);
					vc.pb({i,n});
			swap(pos[a[i]],pos[a[n]]);
		}
	}


	}
else
{
	// cout<<"second\n";
	if(p>i)
	{

		swap(a[p],a[1]);
				vc.pb({p,1});
		swap(pos[a[p]],pos[a[1]]);
		// currnet is in last;
		swap(a[1],a[i]);
	    vc.pb({1,i});
		swap(pos[a[1]],pos[a[i]]);

	}
	else if(p<i)
	{
		if(i-p>=n/2)
		{
		swap(a[i],a[p]);
				vc.pb({p,i});
		swap(pos[a[i]],pos[a[p]]);			
		}
		else
		{
			// 3 steps;  - - - - - -
			swap(a[p],a[n]);
					vc.pb({p,n});
			swap(pos[a[p]],pos[a[n]]);
			swap(a[1],a[n]);
					vc.pb({1,n});
			swap(pos[a[1]],pos[a[n]]);
			swap(a[i],a[1]);
					vc.pb({i,1});
			swap(pos[a[i]],pos[a[1]]);
		}
	}

}

++k;
}

// cout<<"\n";
// for(int i=1;i<=n;i++)cout<<a[i]<<" ";
// tr;
cout<<vc.size()<<"\n";
for(auto sd:vc)cout<<sd.first<<" "<<sd.second<<"\n";

}
}