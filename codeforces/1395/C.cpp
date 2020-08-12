// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define F(i,n) for(int i=1;i<=n;i++)
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define N 100005
// directions
int xx[5]={0,0,1,-1};
int yy[5]={1,-1,0,0};
vector<int > G[N],L[N];


void we_have_choices()
{
    int n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    F(i,n)cin>>a[i];
    F(i,m)cin>>b[i];
    int count=inf;
set<int> k;
k.insert(0);
F(i,n)
    {
        set<int> t;
        F(j,m)
        {
            int temp=a[i]&b[j];
            for(auto sd:k)t.insert(temp|sd);
        }
    k=t;
        
        
    }
    cout<<(*k.begin());
    tr;
    

}
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outm.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)we_have_choices();
    return 0;
}