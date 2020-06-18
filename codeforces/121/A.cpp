#include<iostream>
using namespace std;
long long a[1024];
 
long long f(int n)
{
    long long ans=0;
    for(int i=1;i<=1024;i++)
    {
        if(a[i]<n) ans+=a[i]*(a[i]-a[i-1]);
        else{
            ans+=a[i]*(n-a[i-1]);
            break;
        }
    }
    return ans;
}
 
 
int main()
{
    a[1]=4;
    a[2]=7;
    int t=3;
    for(int i=1;i<512;i++)
    {
        a[t++]=a[i]*10+4;
        a[t++]=a[i]*10+7;
    }
    int l,r;
    cin>>l>>r;
    cout<<f(r)-f(l-1)<<endl;    
    return 0;
 
} 