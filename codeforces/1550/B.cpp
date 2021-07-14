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

        int n,a,b;
        cin>>n>>a>>b;
        string s;cin>>s;

        if((a>=0 and b>=0) or (a<0 and b>=0))
        {
            int c=0;
            for(int i=0;i<n;i++){
                c+=(a*1+b);
            }
            db(c);
        }
        else
        {
            // as max as possible
            int c=0;
            vector<int> o,z;
            for(int i=0;i<n;i++){
                if(s[i]=='1')++c;
                else{
                    if(c>0)o.pb(c);
                    c=0;
                }
            }
            if(c>0)o.pb(c);


            c=0;
            for(int i=0;i<n;i++){
                if(s[i]=='0')++c;
                else{
                    if(c>0)z.pb(c);
                    c=0;
                }
            }
            if(c>0)z.pb(c);

//
//            for(auto sd:o)cout<<sd<<" ";
//            tr;
//            for(auto sd:z)cout<<sd<<" ";
//            tr;


            int mx=0;
            int first=0;
            int sum=0;
            for(auto sd:o){
              first+=(a*sd+b);
              sum+=sd;
            }
            if(abs(sum-n)>=1){
                first+=(a*abs(sum-n)+b);
            }
            mx=first;
            first=0;
            sum=0;
            for(auto sd:z){
                first+=(a*sd+b);
                sum+=sd;
            }
            if(abs(sum-n)>=1){
                first+=(a*abs(sum-n)+b);
            }
            mx=max(first,mx);
            db(mx);



        }
















    }
}