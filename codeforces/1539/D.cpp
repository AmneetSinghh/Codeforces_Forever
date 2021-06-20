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

        int n;
        cin >> n;
        vector<pair<int, int> > vc;
        for (int i = 1; i <= n; i++) {
            int a, b;
            cin >> a >> b;
            vc.pb({b, a});

        }


        sort(vc.begin(), vc.end());
        int i = 0;
        int j = vc.size() - 1;
        int res = 0;
        int total = 0;

        while (i <= j) {
            // first is b, second is a;
            if (vc[i].first <= total) {
                total += vc[i].second;// left;
                res += vc[i].second;// left;
                ++i;
            } else if (vc[i].first <= vc[j].second + total) {
                res += ((vc[i].first - total) * 2);
                vc[j].second -= ((vc[i].first - total));
                total += ((vc[i].first - total));
                total += vc[i].second;// ith vala
                res += vc[i].second;
                ++i;
            } else {
                total += vc[j].second;// this is the total by B;
                res += (vc[j].second * 2);// cost
                --j;
            }
        }

        cout << res;
        tr;


    }
}

