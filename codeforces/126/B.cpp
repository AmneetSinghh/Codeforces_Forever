// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long int 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define N 10005
// directions
int xx[5]={0,0,1,-1};
int yy[5]={1,-1,0,0};
vector<int > G[N],L[N];
string s;
vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;

        pi[i] = j;
    }
    return pi;
}

void we_have_choices()
{
  cin>>s;
  vector<int> pre=prefix_function(s);
  // now we have to check baby
  map<int,int> h;
  for(auto sd:pre)h[sd]++;
  h[pre.back()]--;
int ct = 0, cur = pre.back();
    
    while (cur) {
        ct += h[cur];        
        if (ct) {
            cout << s.substr(0, cur) << endl;
            return;
        }
        cur = pre[cur - 1];
    }
    cout << "Just a legend" << endl;


}





int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)we_have_choices();
    return 0;
}