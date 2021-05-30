#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define mod 1000000007
#define inf 1e18
using namespace std; 
void db(int a) {cout<<a<<"\n";}
void db(int a,int b){ cout<<a<<" "<<b<<"\n";}
void db(int a,int b,int c) {cout<<a<<" "<<b<<" "<<c<<"\n"; }
void db(int a,int b,int c,int d) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";}
void db(int a,int b,int c,int d,int e){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";}
void db(int a,int b,int c,int d,int e,int f) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g,int h){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<"\n"; }
const int maxn=100005;




 
int32_t main()
{
int t=1;
cin>>t;
while(t--){


    int n;
    cin >> n;
    vector<int> a;
    for (int it = 0; it < n; it++) {
      int x;
      cin >> x;
      if (x > 1) {
        while (!a.empty() && a.back() + 1 != x) {
          a.pop_back();
        }

        //mow the last element if there we hvae to get it;
        a.pop_back();
      }
      a.push_back(x);
      for (int j = 0; j <a.size(); j++) {
        if (j > 0) {
          cout << ".";
        }
        cout << a[j];
      }
      cout << '\n';
    }

 
} 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
