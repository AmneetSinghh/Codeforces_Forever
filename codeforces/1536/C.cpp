#include<bits/stdc++.h>
#define int long long
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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}


int32_t main()
{
int t=1;
cin>>t;
while(t--){
/* Practice Never Ends */

int n;cin>>n;
string s;cin>>s;
map<double,int> hash;
int d=0;
int k=0;
for(int i=0;i<n;i++)
{
  int ans=0;
    if(s[i]=='D')++d;
    else if(s[i]=='K')++k;

    double gc=0.0;
    
    if(d==0 or k==0)
    {
      hash[0]++;
      cout<<hash[0]<<" ";
    }
    else
    {
        gc=gcd(d,k);
        int D=d;
        int K=k;
        D/=gc;
        K/=gc;
        double val=double(D/(double)K);
        hash[val]++;
        cout<<hash[val]<<" ";
    }
}

tr;

} 
}
 
 
 