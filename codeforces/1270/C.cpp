#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve()
{
    int n;
    cin>>n;
    int temp;
    ll Sum = 0;
    ll Xor = 0;
    for (int i = 0; i<n; i++)
    {
        cin>>temp;
        Sum+=temp;
        Xor^=temp;
    }
    cout<<2<<endl<<Xor<<' '<<Sum + Xor<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    for (int i = 0; i<t; i++) solve();
 
}
