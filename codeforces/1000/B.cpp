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


int32_t main() {
    io;
    int t = 1;
//    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[100005] = {0};
        int dp[100005] = {0};
        for (int i = 1; i <= n; i++)cin >> a[i];
        dp[n] = m - a[n];
        for (int i = n - 1; i >= 1; i--) {
            dp[i] = (a[i + 1] - a[i]) + dp[i + 2];
        }
        dp[0] = a[1] + dp[2];
        int ans = dp[0];
        int sum = 0;
        a[0] = 0;
        a[n + 1] = m;
        for (int i = 1; i <= n + 1; i++) {
            int first = a[i - 1] + 1;
            int second = a[i] - 1;
            if (a[i - 1] + 1 < a[i]) {
                if (i % 2 == 1) {
                    ans = max(ans, sum + (second - a[i - 1]) + dp[i]);
                } else {
                    ans = max(ans, sum + abs(first - a[i]) + dp[i + 1]);
                }
            }


            if (i % 2 == 1)sum += (a[i] - a[i - 1]);


        }

        cout << ans;
        tr;


    }

}
