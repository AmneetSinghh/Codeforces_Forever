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
    while(t--){
/* Practice Never Ends */

int x1,y1;
int x2,y2;
int xf,yf;
cin>>x1>>y1>>x2>>y2>>xf>>yf;

if(x2!=x1 and y2!=y1){
    cout<<abs(x1-x2)+abs(y1-y2);
}
else if(x2==x1)
{
    int flag=0;
 for(int i=min(y1,y2);i<=max(y1,y2);i++){
     if(xf==x1 and i==yf){cout<<abs(y1-y2)+2;flag=1;}
 }
 if(flag==0)cout<<abs(y1-y2);
}
else if(y1==y2)
{
    int flag=0;
    for(int i=min(x1,x2);i<=max(x1,x2);i++){
        if(yf==y1 and i==xf){cout<<abs(x1-x2)+2;flag=1;}
    }
    if(flag==0)cout<<abs(x1-x2);
}
else cout<<"0";


tr;














    }
}

