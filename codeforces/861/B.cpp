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


int check(int x,int y)
{
    return (x / y) + (x % y == 0 ? 0 : 1);
}
int a[1011],b[1011];
int32_t main()
{
    io;
    int t=1;
//    cin>>t;
    while(t--){
/* Practice Never Ends */
        int n,k;
        cin>>n>>k;
        F(i,k)cin>>a[i]>>b[i];
        set<int> s;
        for(int j=1;j<=200;j++)
        {
            int flag=0;
            for(int i=1;i<=k;i++){
                if(check(a[i],j)!=b[i])flag=1;
            }
            if(flag==0)s.insert(j);// these types of loors;
        }


        set<int> st;
        for(auto sd:s)st.insert(check(n,sd));
if(st.size()!=1)cout<<"-1";
else{
    cout<<*st.begin();
}
tr;


    }
}

