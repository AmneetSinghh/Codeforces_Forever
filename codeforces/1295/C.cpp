// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long int 
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
#define N 10005
// directions
int xx[5]={0,0,1,-1};
int yy[5]={1,-1,0,0};
vector<int > G[N],L[N];

void we_have_choices()
{
  
string s,t;
cin>>s;
cin>>t;
vector<int> vc[100001];
for(int i=0;i<s.length();i++)
{
    int val=s[i]-'a';
    vc[val].pb(i+1);

}

int last=0;
int flag=0;
int res=1;
for(int i=0;i<t.length();i++)
{

    current:
    int c=t[i]-'a'; 
    if(!vc[c].size()){flag=1;break;}
    int find=lower_bound(vc[c].begin(),vc[c].end(),last)-vc[c].begin();
    if(find==vc[c].size()){res++;last=0;goto current;}
    last=vc[c][find]+1;
}

if(flag)cout<<"-1";
else cout<<res;
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