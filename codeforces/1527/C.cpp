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


void go(int x) {
    cout << "? " << x << endl;
    cout.flush();
}

int32_t main() {
    io;
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];
        map<int, vector<int>> store;
        for (int i = 1; i <= n; i++)cin >> a[i], store[a[i]].push_back(i);
        int ans = 0;


        for (auto val:store) {
            vector<int> vc;
            for (auto sd:val.second)vc.push_back(sd);
            vector<int> dp;
            int sum = 0;
            for (int i = vc.size() - 1; i >= 1; i--) {
                sum += (n - vc[i] + 1);
                dp.pb(sum);
            }
            reverse(dp.begin(), dp.end());
            for (int i = 0; i < vc.size() - 1; i++) {
                ans += (vc[i] * dp[i]);
            }
        }


        db(ans);


    }
}
