#include <bits/stdc++.h>
using namespace std;
#define ll long long
std::string toBinary(ll n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

vector<ll> vc;
int main() 
{
/////////////////////////////////////////////////  ERRRRRROOOOOORRRRR   bcz of pandi    ????????????????
ll n;
cin>>n;
for(ll i=1;i<=1000;i++)
{
	std::string::size_type sz = 0;
	string s=toBinary(i);
	ll ni = std::stoll (s,&sz,0);
	vc.push_back(ni);
}
int count=0;
for(int i=0;i<vc.size();i++)
{
  if(n>=vc[i])
  count++;
}
cout<<count<<endl;


}
