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
// cin>>t;
    while (t--) {
/* Practice Never Ends */


        int n, k, x;
        cin >> n >> k >> x;
        int a[n + 1];
        F(i, n)cin >> a[i];

        sort(a + 1, a + 1 + n);
        int dp[n + 1] = {0};
        vector<int> vc[n + 1];
        int j = 0;
        for (int i = 1; i <= n; i++) {
            if (i == 1)vc[j].pb(a[i]);
            else {
                int last = vc[j][vc[j].size() - 1];
                if (abs(last - a[i]) > x) {
                    ++j;
                    vc[j].pb(a[i]);
                } else {
                    vc[j].pb(a[i]);
                }
            }
        }


        vector<pair<int, pair<int, int> > > ans;

        if (j == 0)cout << "1\n";
        else {


            for (int i = 1; i <= j; i++) {
                int val = vc[i][0] - vc[i - 1][vc[i - 1].size() - 1];
                int c = 0;
                if (val % x == 0)c = val / x - 1;
                else c = val / x;


                // cout<<vc[i-1][vc[i-1].size()-1]<<" "<<vc[i][0];
                // tr;
                ans.pb({c, {i - 1, i}});
                // cout<<c;
                // tr;
            }

            sort(ans.begin(), ans.end());
            int total = j + 1;
            for (auto sd:ans) {
                int cost = sd.first;
                if (k >= cost)k -= cost, total--;
                else break;
            }


            cout << total;
            tr;

        }


    }
}
