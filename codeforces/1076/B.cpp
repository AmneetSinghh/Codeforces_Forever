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

void db(int a) { cout << a << "\n"; }

void db(int a, int b) { cout << a << " " << b << "\n"; }

void db(int a, int b, int c) { cout << a << " " << b << " " << c << "\n"; }

void db(int a, int b, int c, int d) { cout << a << " " << b << " " << c << " " << d << "\n"; }

void db(int a, int b, int c, int d, int e) { cout << a << " " << b << " " << c << " " << d << " " << e << "\n"; }

void db(int a, int b, int c, int d, int e, int f) {
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << "\n";
}

void db(int a, int b, int c, int d, int e, int f, int g) {
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << "\n";
}

void db(int a, int b, int c, int d, int e, int f, int g, int h) {
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << "\n";
}


bool isprime(int n) {
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;


    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}


int count_div(int n) {
    int cnt = -1;
    if (n % 2 == 0)return n / 2;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (isprime(i)) {
                cnt = i;
                break;
            }
            if (isprime(n / i)) {
                cnt = n / i;
                break;
            }

        }
    }


    int res = 1 + (n - cnt) / 2;
    return res;
}

int32_t main() {
    io;
    int t = 1;
//    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isprime(n))cout << "1";
        else if (n % 2 == 0)cout << n / 2;
        else {
            int ans = count_div(n);
            cout << ans;
        }


        tr;

    }
}
