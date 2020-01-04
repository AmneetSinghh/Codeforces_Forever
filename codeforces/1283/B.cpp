#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
int t;cin>>t;
while(t--)
{
  ll n,k;
  cin>>n>>k;
  int final=n-n%k;
  int total=final+min(n%k,k/2);
  cout<<total<<endl;
	
}


	
}
