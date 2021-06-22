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

/*
 *
 *
 *     c=3 0 0 0 0 0 0//  the guy who starting loses; in any case;
 *
 *
 *
 *
 *
 *
 */
int32_t main() {
    io;
    int t = 1;
    cin >> t;
    while (t--) {

        // In previous case initial string is palimdrome;
        // In thsi case initial string is not palimdrome.
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        int j = s.size() - 1;
        int first = 0, second = 0;
        while (i < j) {
            if (s[i] == '1' and s[j] == '1');
            else if (s[i] == '0' and s[j] == '0')second++;
            else first++;// 01 or 10
            ++i;
            --j;
        }
        int flag = 0;
        if (n % 2 == 1) {
            if (s[n / 2] == '0')flag = 1;
        }
        // 0 1 not present;
        // same case as before;
        if (first == 0) {
            // it means palimdrome;
            if (flag == 0 and second == 0)cout << "DRAW";
            else if (flag == 0)cout << "BOB";
            else {
                // alice tries to win;
                if (second > 0)cout << "ALICE";
                else cout << "BOB";

            }
        } else {
            // first 0 or 1 present;
            if (first >= 2)cout << "ALICE";
            else if (second == 0) {
                if (first == 1 and flag == 1)cout << "DRAW";// first is 1;
                else if (first == 1 and flag == 0)cout << "ALICE";// first is 1;
            } else if (second != 0) {
                if (flag == 0)cout << "ALICE";
                else {
                    // flag is one,
                    if (flag == 1 and first == 1)cout << "ALICE";
                }
            }

        }

        tr;


    }
}
