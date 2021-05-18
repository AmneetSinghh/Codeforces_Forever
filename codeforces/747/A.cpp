// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 10000000000
using namespace std;
#define MAXN   1010


int32_t main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
// cin>>t;
while(t--){



int n;cin>>n;
int l=1,r=n;
int diff=n-1;
int L=1,R=n;
while(l<=r)
{


    if(l*r>n)
    {
    	--r;
    }
    else if(l*r<n)
    {
    	++l;
    }
    else if(l*r==n)
    {
    	if(abs(l-r)<diff)diff=abs(l-r),L=l,R=r;
    	--l,--r;
    	
    }
}



cout<<L<<" "<<R;
tr; 




}
}