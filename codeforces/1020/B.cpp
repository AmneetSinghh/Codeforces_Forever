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

vector<int> vc[1001];
int vis[1001] = {0};
int ans = -1;

void dfs(int u) {
    vis[u] = 1;
    for (auto c:vc[u]) {
        if (vis[c] == 1) {
            ans = c;
            return;
        }
        dfs(c);
    }
    return;
}

int32_t main() {
    io;
    int t = 1;
//    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];

        F(i, n)cin >> a[i], vc[i].pb(a[i]);
        for (int i = 1; i <= n; i++) {
            memset(vis, 0, sizeof vis);
            ans = -1;
            dfs(i);
            cout << ans << " ";
        }


    }

}


