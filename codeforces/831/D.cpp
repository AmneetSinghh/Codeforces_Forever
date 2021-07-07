#include<bits/stdc++.h>
#define int long long int
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
const int maxn=2004;

int a[maxn];
int b[maxn];
int n,k,x;

bool check(int mid)
{
int vis[maxn]={0};
memset(vis,0,sizeof vis);
for(int i=1;i<=n;i++)
{
    int flag=0;
    for(int j=1;j<=k;j++)
    {
        int sum=abs(a[i]-b[j])+abs(b[j]-x);
        if(sum<=mid and vis[j]==0)
        {
            vis[j]=1;
            flag=1;
            break;
        }
    }
    if(!flag)return false;
}
return true;
}
int32_t main()
{
    io;
    int t=1;
//    cin>>t;
    while(t--){
/* Practice Never Ends */
cin>>n>>k>>x;
F(i,n)cin>>a[i];
F(i,k)cin>>b[i];

sort(a+1,a+1+n);
sort(b+1,b+1+k);// keys


int l=0,r=10000000000000,ans=0;
while(l<=r){
    int mid=(l+r)/2;
    if(check(mid)) ans=mid,r=mid-1;
    else l=mid+1;
}


db(ans);



    }
}

