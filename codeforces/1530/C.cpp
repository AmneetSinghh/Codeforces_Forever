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
int check(int k)
{
   return k-k/4;
}
int max(int a,int b) {
if(a>=b)return a;
return b;
}

int32_t main()
{
    io;
    int tc=1;
    cin >> tc;
    for (int tt = 1; tt <= tc; ++tt) {
int n;
cin>>n;
int a[n+1];
F(i,n)cin>>a[i];
int b[n+1];
F(i,n)cin>>b[i];
sort(a+1,a+1+n);
sort(b+1,b+1+n);
reverse(a+1,a+1+n);
reverse(b+1,b+1+n);
int first=0,last=n;
int second=0,last1=n;

int get=check(n);
for(int i=1;i<=get;i++)
{
    first+=a[i];
    last=i;
}
        for(int i=1;i<=get;i++)
        {
            second+=b[i];
            last1=i;
        }

//        db(first,second,last,last1);
int i=n,c=0;
while(first<second)
{
    ++c;
    ++i;
    if(i%4!=0)
 {
      first+=100;
     ++last1;
     if(last1<=n)second+=b[last1];
 }
 else
 {
     first+=100;
     if(last>=1)first-=a[last],--last;
     else first-=100;

 }

//db(first,second);

}


db(c);

    }
}