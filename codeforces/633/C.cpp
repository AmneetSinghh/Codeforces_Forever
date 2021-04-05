#include<bits/stdc++.h>
#define int long long
#define tr cout<<"\n";
#define iPair pair<int,int>
#define INF 10000000000009
#define pb push_back
#define un unordered_map
using namespace std;
const int maxn=100005;

const int p = 31;
int seq[100100];
map<int, string> hs;
string s;
 
void print(int n) {
  if (!n) return;
  string t = hs[seq[n]];
  print(n - t.size());
  cout << t << " ";
}



int32_t main() {
    int tt=1;while(tt--){
 
 int n, m;
  cin >> n >> s >> m;
  for (int i = 0; i < m; i++) {
    string a;
    cin >> a;
    int h = 0;
    for (int j = 0; j < a.size(); j++) {
      h = h*p + tolower(a[j]);// conver to the hash man;
    }
    hs[h] = a;
  }
  fill(seq, seq + n, -1);
  seq[0] = 0;
  for (int i = 0; i < n; i++) {
    int h = 0;
    for (int j = i; j >= 0; j--) {
      h = h*p + s[j];
      if (seq[j] != -1 && hs.count(h)) {
        seq[i + 1] = h;// htis is hte hash;
        break;
      }
    }
  }
  print(n);
}}
