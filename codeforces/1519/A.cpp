#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 10000000000009
using namespace std;
const int maxn=100005;


int32_t main() {
    int t=1;
    cin>>t;
    while(t--){


int n,m,k;
cin>>n>>m>>k;
if(n>=m)swap(n,m);
int val=m-n;
if(k==0){
    if(n==m)cout<<"YES";
    else cout<<"NO";
tr;
continue;
}

if((k+1)*n>=m)cout<<"YES";
else cout<<"NO";


tr;


    }
     
}