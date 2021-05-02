#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   10000003
  // Function to check if x is power of 2

int32_t main() 
{
int t=1;
cin>>t;

unordered_map<int,int> one,two;
for(int i=1;i<=500000;i++){
    one[2*pow(i,2)]++;
    two[pow(2*i,2)]++;
}

while(t--)
{
/* Practice never ends */


 int n;
 cin>>n;
 if(one[n] || two[n])cout<<"YES";
 else cout<<"NO";



 tr;



}
}