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

        int n, h, a, b, k;
        cin >> n >> h >> a >> b >> k;
        while (k--) {
            int ta, fl, tb, fb;
            cin >> ta >> fl >> tb >> fb;
            int ans = INT_MAX;
            if (ta == tb)ans = min(ans, abs(fl - fb));
            else if (fl >= a and fl <= b)ans = min(ans, abs(ta - tb) + abs(fl - fb));
            else {
                if (fl < a)ans = min(abs(fl - a) + abs(ta - tb) + abs(fb - a), ans);
                else if (fl > b)ans = min(ans, abs(fl - b) + abs(ta - tb) + abs(fb - b));
            }

            cout << ans;
            tr;
        }


    }

}


