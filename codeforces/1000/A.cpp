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
        int n;
        cin >> n;
        int hash[20][3];
        int hash1[20][3];
        memset(hash, 0, sizeof hash);
        memset(hash1, 0, sizeof hash1);
        int first = 0, second = 0, third = 0;
        int first1 = 0, second1 = 0, third1 = 0;
        for (int i = 1; i <= n; i++) {
            string s;
            cin >> s;
            char last = s[s.size() - 1];
            hash[s.size()][((last == 'S') ? 1 : 0)]++;
            if (s.size() == 1) {
                if (s[0] == 'S')first++;
                else if (s[0] == 'M')second++;
                else third++;
            }

        }

        for (int i = 1; i <= n; i++) {
            string s;
            cin >> s;
            char last = s[s.size() - 1];
            hash1[s.size()][((last == 'S') ? 1 : 0)]++;
            if (s.size() == 1) {
                if (s[0] == 'S')first1++;
                else if (s[0] == 'M')second1++;
                else third1++;
            }
        }

        int res = 0;
        for (int i = 0; i <= 10; i++) {
            if (i == 0)continue;
            if (i == 1) {
                int val = 0;
                val = abs(first - first1) + abs(second - second1);
                val = min(val, abs(first - first1) + abs(third1 - third));
                val = min(val, abs(second - second1) + abs(third1 - third));
                res += val;
                continue;
            }
            int first = 0, second = 0;
            if (hash[i][0] != hash1[i][0]) {
                first = abs(hash[i][0] - hash1[i][0]);
            }
            if (hash[i][1] != hash1[i][1]) {
                first = min(first, abs(hash[i][1] - hash1[i][1]));
            }
            res += first;
        }
        cout << res;
        tr;
    }
}
