// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 100000000
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 10001
// directions

void we_have_choices()
{

int n,ans=0;
cin>>n;
int a[n+1];
F(i,n)cin>>a[i];
map<int,int> h;
F(i,n){
	int c=0;
	for(int j=i+1;j<=n;j++)
	{
		if(a[i]==a[j])ans+=c;
		c+=h[a[j]];
	}
	h[a[i]]++;
}
cout<<ans;
tr;
}
 
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)we_have_choices();
    return 0;
}