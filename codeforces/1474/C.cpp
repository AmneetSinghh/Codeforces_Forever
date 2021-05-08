// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>

#define int                 long long int
#define IOS                 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi                  vector<int>
#define vii                 vector<vector<int>>
#define pb                  push_back
#define mp                  make_pair
#define eb                  emplace_back
#define ii                  pair<int,int>
#define loop(n)             for(int i=0; i<(int)n; i++)
#define all(arr)            arr.begin(),arr.end()
#define ld                  long double
#define um                  unordered_map
#define test                int t; cin>>t; while(t--)
#define floatdigit(n)       cout<<fixed; cout<<setprecision(n)
#define MOD                 1000000007
#define inf                 1e18
#define MAX                 700005
#define setBits(x)          __builtin_popcountll(x)
#define parity(x)           __builtin_parityll(x)
using namespace std;
/*
1
2
1 1 2 4

*/
 
int32_t main() 
{
int t=1;
cin>>t;
while(t--){

int n;
    cin>>n;
 
    int m = 2*n;
    vector<int>  a(m);
    
    loop(m){
      cin>>a[i];
    }
 
    sort(a.rbegin(), a.rend());
    int mx = 0;
    
    int ans = -1;
 
    for(int i = 0; i < m; i++){
      if(i == mx) continue;
      int x = a[mx];
      multiset<int> ml;
 
      for(int j = 0; j < m; j++){
        if(j == i or j == mx) continue;
        ml.insert(a[j]);
      }
 
      int ok = 1;
 
      while(ml.size()){
        int it = *ml.rbegin();
        ml.erase(ml.find(it));
 
        if(ml.find(x-it) == ml.end()){
          ok = 0;
          break;
        }
 
        ml.erase(ml.find(x-it));
        x = it;
      }
 
      if(ok == 1){
        ans = i;
      }
 
    }
 
    if(ans == -1) cout<<"NO"<<endl;
    else{
      cout<<"YES"<<endl;
      cout<<a[mx]+a[ans]<<endl;
 
 
      multiset<int> ml;
      for(int i = 0; i < m; i++) ml.insert(a[i]);
 
      int x = a[mx]+a[ans];
      while(ml.size()){
        int a = *ml.rbegin();
        ml.erase(ml.find(a));
        ml.erase(ml.find(x-a));
        cout<<a<<" "<<x-a<<endl;
        x = a;
      }
 
    }
  }


}