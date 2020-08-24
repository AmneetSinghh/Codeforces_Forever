#include<bits/stdc++.h>
using namespace std;
#define tr cout<<endl
 
int main()
{

#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif

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
        // Ithe tak aram nal smj gya
    }
    double block = (temp_m / t) + (temp_m_2 / (2 * t)); // how much(fraction) done in one block
    double x;
    x = floor(1.0 / block); // how many blocks


// done sm gya baby mere
 
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
    //cout << setprecision(12) << fixed << x * block_m + extra << endl;
 
    return 0;
}