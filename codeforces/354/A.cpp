#include<iostream>
 
using namespace std;
 
long long n,l,r,Ql,Qr,a[1000*100+100],total=(long long)1000*1000*1000*1*1000*1000*1000,sum,SUM;
 
 // just how to calculate the panality i not able to understood
int calc(int x,int y){
    if(x>y)
        return (x-y-1)*Ql;
    if(x<y)
        return (y-x-1)*Qr;
    return 0;   
}
 
int main(){
    cin>>n>>l>>r>>Ql>>Qr;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)SUM+=a[i];
    for(int i=0;i<=n;i++){
        SUM-=a[i];
        sum+=a[i];
        total=min(total,l*sum+r*SUM+calc(i,n-i));
    }
    cout<<total;
}