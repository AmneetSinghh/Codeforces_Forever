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
int n,m;
cin>>n>>m;
string s,t;
cin>>s>>t;
int ind=-1;
for(int i=0;i<n;i++){
    if(s[i]=='*')ind=i;
}
if(ind==-1)
{
    if(s==t)cout<<"YES";
    else cout<<"NO";
}
else
{
    int flag=0;
    int i=0,j=0;

    if(m<ind+(n-ind-1)){cout<<"NO";continue;}

    for(int i=0;i<ind;i++){
        if(s[i]!=t[i])flag=1;
    }
    if(flag==1){cout<<"NO";continue;}

    for(int i=n-1,j=m-1;i>ind;i--,j--)
    {
        if(s[i]!=t[j])flag=1;
    }
    if(flag==1){cout<<"NO";continue;}
    cout<<"YES";


}


tr;




    }
}

