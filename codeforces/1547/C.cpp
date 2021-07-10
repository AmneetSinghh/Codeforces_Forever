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
    cin>>t;
    while(t--) {


        int k,n,m;
        cin>>k>>n>>m;
        int a[301],b[301];
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=m;i++)cin>>b[i];

        int flag=0;
        vector<int> vc;

        int i=1;
        int j=1;

        while(true)
        {
            int flag=0;

            while(i<=n and k>=a[i])
            {
                vc.pb(a[i]);
                if(a[i]==0) {
                    ++k;
                }
                ++i;
                flag=1;
            }
            while(j<=m and k>=b[j]){
                vc.pb(b[j]);
                if(b[j]==0) {
                    ++k;
                }
                ++j;
                flag=1;}
            if(flag==0)break;

        }

        if(vc.size()!=n+m)cout<<"-1";
        else {
            for(auto sd:vc)cout<<sd<<" ";
        }


      tr;




    }




}