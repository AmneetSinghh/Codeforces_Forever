// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int unsigned long long int  
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 10001
// directions

void we_have_choices()
{
  double k, d, t;
    cin >> k >> d >> t;
    double block_m; // how many minutes in one block
    double temp_m, temp_m_2; // how many on minutes in one block, off .......
    if (k <= d) {
        block_m = d;
        temp_m = k;
        temp_m_2 = d - k;
    }
    else {
        double t_ = floor(k / d);
        block_m = t_ * d;
        if (t_ * d != k) block_m += d;
        temp_m = k;
        temp_m_2 = block_m - temp_m;
    }
    double block = (temp_m / t) + (temp_m_2 / (2 * t)); // how much(fraction) done in one block
    double x;
    x = floor(1.0 / block); // how many blocks
    double done = x * block;
    double left = 1 - done;/// Left baby
    double dn_on = temp_m / t;
    double dn_off = temp_m_2 / (2 * t); // how much done in one off of one block
    double extra;
    if (left <= dn_on)
        extra = t* left;
    else {
        extra = temp_m;
        left -= dn_on;// From the left cut the D_ON that means it lefts more baby
        extra += (t*2.0) * left;
    }

    // making the x and the blok_m is very easy
    printf("%.12lf\n", x * block_m + extra);
}
 
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)we_have_choices();
    return 0;
}