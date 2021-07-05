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
//    cin>>t;
    while(t--){
/* Practice Never Ends */

string s;
cin>>s;
int n=s.size();
int c=0;
int mx=0;
for(int i=0;i<n;i++)
{
    if(i==0)c=1;
    else if(s[i]==s[i-1])c=1;
    else ++c;
    mx=max(mx,c);
}
//cout<<mx<<"\n";
if(s[0]==s[n-1])cout<<mx<<"\n";
else
{
    // check for better; usage;
    int i=0,j=n-1;
    int one=0;
    while(i<n){
        if(i==0)++one;
        else if(s[i]==s[i-1])break;
        else ++one;
            ++i;
    }
    while(j>=0){
        if(j==n-1)++one;
        else if(s[j]==s[j+1])break;
        else ++one;
        j--;
    }

    if(one>mx and one<=n)mx=one;
    cout<<mx<<"\n";

}

















    }
}

