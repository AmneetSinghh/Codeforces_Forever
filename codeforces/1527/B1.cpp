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
        string s;
        cin >> s;
        int i = 0;
        int j = s.size() - 1;
        int c = 0;
        while (i < j) {
            if (s[i] == '0' and s[j] == '0')++c;
            ++i;
            --j;
        }
        int flag = 0;
        if (n % 2 == 1) {
            if (s[n / 2] == '0')flag = 1;
        }
        // not odd;
        if (flag == 0 and c == 0)cout << "DRAW";
        else if (flag == 0)cout << "BOB";
        else {
            // alice tries to win;
            if (c > 0)cout << "ALICE";
            else cout << "BOB";

        }
        tr;

    }
}
