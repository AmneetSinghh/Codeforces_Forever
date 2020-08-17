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
#define N 205
// directions
int xx[5]={0,0,1,-1};
int yy[5]={1,-1,0,0};
vector<int > G[N],L[N];


void we_have_choices()
{
   
int n;
cin>>n;
string s;
cin>>s;
int cr=0,c=0;
// remove the confusing part bbay
while(s.size() && s[0]==s.back()){
++cr;s.pop_back();}

if(s.empty())
{
    if(cr<=2)cout<<"0";
    else if(cr%3==0)cout<<cr/3;
    else cout<<cr/3+1;
    tr;
    return;
}
s.push_back('#');
for(int i=0;i+1<s.size();i++)
{
    ++cr;
    if(s[i]!=s[i+1])
    {
      c+=(cr/3);// just take care of the end equuals baby
      cr=0;
    }
}

cout<<c;
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