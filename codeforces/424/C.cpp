#include<iostream>
#include<cstdio>
#include<algorithm>
 
using namespace std;
 
int x[1000005]; // x[i] = 0^1^...^i
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int p;
 
    int Q = 0;
    for(int i = 0; i < n; ++i){
        cin >> p;
        Q ^= p;
    }
 
    for(int i = 1; i <= n; ++i){
        x[i] = i^x[i-1];
    }
 
    for(int k = 2; k <= n; ++k){
        int t = n/k, r = n%k;
        if(t % 2 == 1){
            Q ^= x[r]^x[k-1];
        } else{
            Q ^= x[r];
        }
    }
 
    cout << Q << endl;
 
    return 0;
}