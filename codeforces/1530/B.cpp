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
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        memset(a,0,sizeof a);
        for(int i=1;i<=m;i++){
            if(i%2==1)a[1][i]=1;
            else a[1][i]=0;
        }
        for(int i=1;i<=m;i++){
            if(i%2==1)a[n][i]=1;
            else a[n][i]=0;
        }


        // not edge;
        for(int i=3;i<=n;i+=2)
        {
            if(i>=n-1)break;
            a[i][1]=1;
            a[i][m]=1;
        }

        F(i,n){
            F(j,m)cout<<a[i][j];
            tr;
        }
        tr;





    }
}