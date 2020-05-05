#include<bits/stdc++.h>
using namespace std;
long long a[1010],b[1010],c[1010];
long long maxn=0;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		b[i]=a[i];
		long long ans=b[i];
		for(int j=i-1;j>=1;j--){
			b[j]=min(a[j],b[j+1]);
			ans+=b[j];
		}
		for(int j=i+1;j<=n;j++){
			b[j]=min(a[j],b[j-1]);
			ans+=b[j];
		}
		if(maxn<ans){
			maxn=ans;
			for(int i=1;i<=n;i++){
				c[i]=b[i];
			}
		}
	}
	for(int i=1;i<=n;i++)cout<<c[i]<<' ';
}
