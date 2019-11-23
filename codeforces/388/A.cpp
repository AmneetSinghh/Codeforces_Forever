#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	int count=0;
	for(int i=0;i<n;i++)
	if(count*(a[i]+1)<=i)
	count++;
	
	
	cout<<count<<endl;
	return 0;
}
