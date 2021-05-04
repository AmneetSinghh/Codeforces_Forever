#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   100005




int32_t main() 
{
int t=1;
// cin>>t;
while(t--){
  
int n;
cin>>n;
string a,b;cin>>a>>b;
int ans=0;
set<int> first[1001];
set<int> second[1001];
for(int i=0;i<n;i++)
  {
    if(a[i]=='?')first[26].insert(i);
    else first[a[i]-'a'].insert(i);
  }
for(int i=0;i<n;i++)
  {
    if(b[i]=='?')second[26].insert(i);
    else second[b[i]-'a'].insert(i);

  }


vector<pair<int,int>> vc;
for(int i=0;i<=25;i++)
{
  // cut from first;
  while(first[i].size()>=1 and second[i].size()>=1)
  {
    auto lo=(*first[i].begin());
    first[i].erase(first[i].begin());
    auto ro=(*second[i].begin());
    second[i].erase(second[i].begin());
    vc.pb({lo,ro});
  }

}

// questions marks;

for(int i=0;i<=26;i++)
{
  while(first[26].size()>=1 && second[i].size()>=1)
  {
    auto lo=(*first[26].begin());
    first[26].erase(first[26].begin());
    auto ro=(*second[i].begin());
    second[i].erase(second[i].begin());
    vc.pb({lo,ro});
  }
}


for(int i=0;i<=26;i++)
{
  while(first[i].size()>=1 && second[26].size()>=1)
  {
    auto lo=(*first[i].begin());
    first[i].erase(first[i].begin());
    auto ro=(*second[26].begin());
    second[26].erase(second[26].begin());
    vc.pb({lo,ro});
  }
}

cout<<vc.size();
tr;
for(auto sd:vc)cout<<sd.first+1<<" "<<sd.second+1<<"\n";


}
}
