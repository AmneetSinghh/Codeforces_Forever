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

int dp[101][101][15];

/*
2 1 3
1 1 1
3 2 0
5 1 1 5 5
 */
int32_t main() {
    io;
    memset(dp, 0, sizeof dp);
    int n, q, c;
    cin >> n >> q >> c;
    F(i, n) {
        int x, y, s;
        cin >> x >> y >> s;
        dp[x][y][s]++;
    }
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            for (int c = 0; c <= 10; c++) {
                dp[x][y][c] += dp[x][y - 1][c];
            }
        }
    }

    while (q--) {
        int t, x1, y1, x2, y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        int hash[11] = {0}, ans = 0;
        for (int x = x1; x <= x2; x++) {
            for (int c = 0; c <= 10; c++) {
                int cur = dp[x][y2][c] - ((y1 - 1 < 0) ? 0 : dp[x][y1 - 1][c]);
                hash[c] += cur;
            }
        }


        int actual = t;
        for (int k = 0; k <= 10; k++) {
            if (hash[k] == 0)continue;
            t = actual;
            if (t <= c - k)ans += (hash[k] * (k + t));
            else {
                t -= (c - k);
                int cur = t / (c + 1);
                int rem = t % (c + 1);
                if (rem == 0)ans += (hash[k] * c);
                else ans += (hash[k] * (rem - 1));

            }
        }

        cout << ans;
        tr;
    }

}


