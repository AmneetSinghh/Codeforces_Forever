#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
long long int n,m,x,y,e,s,res,k[100010],sum[100010],mod=1000000007;
vector<long long int>sc;
vector< pair<long long int,long long int> >in;
int main()
{
    scanf("%I64d %I64d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%I64d %I64d",&x,&y);
        in.push_back(make_pair(y,x) ) , sc.push_back(y);
    }
    sort(in.begin(),in.end());
    sort(sc.begin(),sc.end());

    for(int i=0;i<m;i++)
    {
        e=lower_bound( sc.begin() , sc.end() , in[i].first )-sc.begin();
        s=lower_bound( sc.begin() , sc.end() , in[i].second )-sc.begin();
        k[i]=(sum[e]-sum[s]+mod)%mod;
        if(in[i].second==0)
            k[i]++;
        sum[i+1]=(sum[i]+k[i])%mod;// current + previous baby meree
        
       }
    for(int i=0;i<m;i++)
        if(in[i].first==n)
          res=(res+k[i])%mod;
  
  
  cout<<res<<"\n";
 
    return 0;
}