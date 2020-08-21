
// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 10005
// directions
vector<int> G[200005];
void we_have_choices()
{
 
int x,y,z;
cin>>x>>y>>z;
int x1,y1,z1;
cin>>x1>>y1>>z1;


int to=x+z;
if(z1>to)
{
	int rem=z1-(x+z);
	int ans=-2*rem;
cout<<ans;tr;
}
else
{

 if(z1>x)
 {
 	int val=z1-x;
 	int tom=z-val;


int second=0;
if(tom>y1)second=y1*2;
	else second=tom*2;

	cout<<second;
	tr;

 }
 else
 {
int second=0;
if(z>y1)second=y1*2;
	else second=z*2;

	cout<<second;
	tr;
 }
 
}




}


int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)we_have_choices();
    return 0;
}