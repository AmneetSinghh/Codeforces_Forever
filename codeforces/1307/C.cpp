#include <iostream>
using namespace std;

typedef long long ll;
ll arr1[26],arr2[26][26];

int main(){
string s;cin>>s;
ll hash[27]={0};
ll a[27][27]={0};
for(ll i=0;i<s.length();i++)
{
	for(ll j=0;j<26;j++)
	if(hash[j])a[s[i]-97][j]+=hash[j];
	hash[s[i]-97]++;
}
// for length one
ll mx=-1;
for(int i=0;i<26;i++)
mx=max(mx,hash[i]);

for(int i=0;i<26;i++)
for(int j=0;j<26;j++)
mx=max(mx,a[i][j]);

cout<<mx<<endl;
}
