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


int gcd(int a, int  b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
int  lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int32_t main()
{
    int t=1;
    cin>>t;
    while(t--){
/* Practice Never Ends */

int n;
cin>>n;
int res=0;
int lc=1;
int gc=1;
if(n==1){cout<<"2\n";continue;}
for(int i=2;i<=50;i++)
{
    lc=lcm(i,lc);// that we have to cut;
    int have=n/gc;
    int cut=n/lc;// cut it from it;
    if(have==0)break;
    have-=cut;
    if(have<=0)continue;

    int temp=((have%mod)*(i)%mod)%mod;
    res+=temp;
    res%=mod;
    gc=lcm(i,gc);

}


db(res);




















    }
}

