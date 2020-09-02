/*
Name                     : Harry Singh (:)
Age                      : 20 (:)
College                  : Lovely Professional University (:)
Email                    : harryamneet600@gmail.com (:)
Hobbies                  : Coding and Typeracer (:)
Goal                     : Long term is fixed and Short term is changing everyday (:)
Relatoinship Status      : Single (:)
Phone no                 : 91-********77 (:)
Waheguru Ji ka Khalsa, Waheguru Ji ki Fateh;
*/

#include<bits/stdc++.h>
#define int unsigned long long int
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 1000001
#define range 100000000000000
// directions
int dp[200005];
void Waheguru()
{
int r,g,h;
	cin >> r >> g;
	for(int i=1;i*(i+1)/2<=r+g;i++) h=i;
	dp[0] = 1;
	for(int i=1;i<=h;i++)
		for(int j=r;j>=i;j--)
			(dp[j] += dp[j-i]) %= mod;
	int ans = 0;
	for(int i=0;i<=r;i++) if(h*(h+1)/2-i <= g) (ans += dp[i]) %= mod;
	cout << ans;
}
 
 
 
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Waheguru();
    return 0;
}