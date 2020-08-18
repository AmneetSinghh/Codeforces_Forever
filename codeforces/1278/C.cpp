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
  
int n;
cin>>n;
int a[2*n+2];
int one=0,two=0;
F(i,2*n){cin>>a[i];if(a[i]==1)one++;else two++;}

if(one==two){cout<<"0\n";return;}
int pre[n+1][4];
map<int,int> hash1,hash;
F(i,n)F(j,3)pre[i][j]=0;
pre[0][1]=0;
pre[0][2]=0;
F(i,n)
{
    if(a[i+n]==1)
    {
        pre[i][1]+=pre[i-1][1]+1;
        pre[i][2]+=pre[i-1][2];
    }
    else
    {
        pre[i][1]+=pre[i-1][1];
        pre[i][2]+=pre[i-1][2]+1;
    }

}


/// just save the 2-1 baby
F(i,n)if(!hash[pre[i][2]-pre[i][1]])hash[pre[i][2]-pre[i][1]]=i;// first index baby
F(i,n)if(!hash1[pre[i][1]-pre[i][2]])hash1[pre[i][1]-pre[i][2]]=i;// first index baby


int mx=0;


if(one>two)
{
    if(hash1[one-two])
{
    int first=one-pre[hash1[one-two]][1];
    int second=two-pre[hash1[one-two]][2];
    mx=max(mx,first*2);
}
}
else
{
      if(hash[two-one])
{
    int first=one-pre[hash[two-one]][1];
    int second=two-pre[hash[two-one]][2];
    mx=max(mx,first*2);
}
}


for(int i=n;i>=1;i--)
{

  if(a[i]==1)--one;
  else --two;


if(one==two) { mx=max(mx,one*2);break;}
if(one>two)
{
    if(hash1[one-two])
{
    int first=one-pre[hash1[one-two]][1];
    int second=two-pre[hash1[one-two]][2];

    mx=max(mx,first*2);
}
}
else
{
      if(hash[two-one])
{
    int first=one-pre[hash[two-one]][1];
    int second=two-pre[hash[two-one]][2];
    mx=max(mx,first*2);
}
}

}


cout<<(2*n-mx);
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