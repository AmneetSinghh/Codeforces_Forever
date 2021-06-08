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
void db(int a) {cout<<a<<"\n";}
void db(int a,int b){ cout<<a<<" "<<b<<"\n";}
void db(int a,int b,int c) {cout<<a<<" "<<b<<" "<<c<<"\n"; }
void db(int a,int b,int c,int d) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";}
void db(int a,int b,int c,int d,int e){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";}
void db(int a,int b,int c,int d,int e,int f) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g,int h){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<"\n"; }





int32_t main()
{
int t=1;
// cin>>t;
while(t--){
/* Practice Never Ends */
int k;

int n;cin>>n;
cin>>k;

int a[n+1];
int val;
int vis[1001]={0};
map<int,int> hash;
for(int i=1;i<=n;i++)
{
  cin>>val;
  hash[val%k]++;
}

int ans=0;
for(auto sd:hash)
{
        // cout<<sd.first<<" "<<sd.second<<"\n";

if(sd.first==0)
{
  vis[sd.first]=1;
  ans+=((sd.second)/2)*2;
}
else
{
    if(vis[sd.first]==0 and vis[k-sd.first]==0 and hash[k-sd.first]>=1)
    {
      if(k-sd.first==sd.first){vis[sd.first]++,ans+=((sd.second/2)*2);continue;}
      
      ans+=min(hash[k-sd.first],sd.second)*2;
      vis[sd.first]++;
      vis[k-sd.first]++;
    }  
}

}
db(ans);



} 
}
 
 
 