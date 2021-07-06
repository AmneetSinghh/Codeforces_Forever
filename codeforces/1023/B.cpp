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


int32_t main()
{
    io;
    int t=1;
//    cin>>t;
    while(t--){
/* Practice Never Ends */

int n,k;
cin>>n>>k;
if(n==1){cout<<"0";continue;}

if(k<=n)
{
    if(k%2==0)cout<<k/2-1;
    else cout<<k/2;
}
else
{
    // k>n;
    int r=n-1;
    int l=1;
    int ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(n+mid==k){ans=mid;break;}
        if(n+mid<k)l=mid+1;
        else r=mid-1;
    }
    if(ans==-1)cout<<"0";
    else
    {
        int l=ans;
        int r=n;
//        cout<<l<<" "<<r;
//        tr;
        int tot=r-l+1;
       cout<<tot/2;
    }
}



    }
}

