#include<bits/stdc++.h>
#define int long long int
#define ll long long int
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
    int tc=1;
    cin >> tc;
    for (int tt = 1; tt <= tc; ++tt) {


int n;
cin>>n;
int a[n+1],b[n+1];
F(i,n)cin>>a[i];
F(i,n)cin>>b[i];
vector<ipair> vc;
while(true)
{
    int flag=0;
    F(i,n)
    {
        if(a[i]!=b[i])
        {
          flag=1;
        }
    }

    if(flag==0)break;
    int first=0;
    int second=0;
    for(int i=1;i<=n;i++){
        if(a[i]<b[i])first=i;
        if(a[i]>b[i])second=i;
    }
    if(first==0 or second==0)break;
    vc.pb({second,first});
    a[first]++;
    a[second]--;
}

int flag=0;
F(i,n){
    if(a[i]!=b[i])flag=1;
}
if(flag==1)cout<<"-1\n";
else
{
    cout<<vc.size();;
    tr;
    for(auto sd:vc)db(sd.first,sd.second);
}













    }
}