
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
 
int n;
cin>>n;
int a[n+1];
vector<int> vc;
F(i,n)cin>>a[i],vc.pb(a[i]);
sort(vc.begin(),vc.end());
int mi=vc[0];
vector<int> ans;
int flag=0;
F(i,n)
{
 if(a[i]!=vc[i-1])
 {
    if(a[i]%mi!=0)flag=1;
 }
}

if(flag)cout<<"NO";
else cout<<"YES";
tr;

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