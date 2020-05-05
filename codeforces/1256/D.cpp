#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll t;cin>>t;while(t--){
ll n,k;cin>>n>>k;string s;cin>>s;

ll pos=0;
ll s_p=0;
for(ll i=0;i<s.length();i++)
{
	if(s[i]=='0')
	{
		/// case of the fi4rst index and case of when no one apears and all the zeros then go to thsi case bro
		if(i==0 || s[i-1]=='0'){
		pos=i+1;continue;}
		s_p=min(i-pos,k);k-=s_p;
		if(k>0){// means some swaps left still
		swap(s[i],s[pos]);
		++pos;}
		else if(k==0){
			swap(s[i],s[i-s_p]);break;}
		
	}
}
cout<<s<<endl;


}
return 0;
}
