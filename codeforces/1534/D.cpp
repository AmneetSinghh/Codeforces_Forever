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
//    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        go(1);
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        // who are the even occures of the one, add in anotehr side same add on another side.
        vector<int> adj[n];
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            adj[a[i]].pb(i + 1);
            cnt += (!(a[i] % 2));
        }
        vector<int> str;
        if (cnt <= n / 2) {
            for (int i = 2; i < n; i += 2) {
                for (auto x: adj[i]) {
                    str.pb(x);
                }
            }
        } else {
            for (int i = 1; i < n; i += 2) {
                for (auto x: adj[i]) {
                    str.pb(x);
                }
            }
        }
        set<pair<int, int>> ans;
        for (int i = 0; i < n; ++i) {
            if (a[i] == 1) {
                ans.insert(make_pair(1, i + 1));
            }
        }
        for (auto x: str) {
            go(x);
            for (int i = 0; i < n; ++i) {
                int y;
                cin >> y;
                if (y == 1 && !ans.count(make_pair(i + 1, x))) {
                    ans.insert(make_pair(x, i + 1));
                }
            }
        }
        cout << "!" << endl;
        for (auto x: ans) {
            cout << x.first << " " << x.second << endl;
        }

    }
}
