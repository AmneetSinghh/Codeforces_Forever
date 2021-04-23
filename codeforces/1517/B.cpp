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

int n,m;
cin>>n>>m;
vector<pair<int,int>> vc;
int a[n+1][m+1];
int changed[n+1][m+1];
memset(changed,0,sizeof(changed));
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)cin>>a[i][j],vc.pb({a[i][j],i});
}
sort(vc.begin(),vc.end());
for(int i=1,j=0;i<=m;i++,j++)
{
    int ind=vc[j].second;
    int val=vc[j].first;
    int ind1;
    for(int k=1;k<=m;k++){
        if(a[ind][k]==val && changed[ind][k]==0){ind1=k;break;}
    }
        swap(a[ind][ind1],a[ind][i]);
        changed[ind][i]=1;
}





for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)cout<<a[i][j]<<" ";
        tr;
}


    }
     
}