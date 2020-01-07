#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int even=n/2;
    int odd=n-even;
    int p=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]==0) p++;
        if(arr[i]%2 && arr[i]!=0) odd--;
        else if(arr[i]!=0) even--;
    }
    if(n==1)
    {cout << 0 << endl;return 0;}
    else if(n==2)
    {cout << 1 << endl;return 0;}
    if(p==n)
    {cout << 1 << endl;return 0;}
    int od[n],eve[n];
    int count=0;
    int f=-1;
    int ans=0;
    int oc=0,ec=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        count++;
        else if(f==0 && arr[i]%2==0)
        {eve[ec++]=count;count=0;}
        else if(f==1 && arr[i]%2)
        {od[oc++]=count;count=0;}
        if(arr[i]%2)
        {count=0;f=1;}
        else if(arr[i]!=0)
        {count=0;f=0;}
    }
    
 
    
    sort(od,od+oc);
    sort(eve,eve+ec);
    
    
    for(int i=0;i<oc;i++)
    {
        if(od[i]>odd)
        {ans+=2;od[i]-=odd;even-=od[i];}
        else
        {odd-=od[i];
        od[i]=0;}
    }
    for(int i=0;i<ec;i++)
    {
        if(eve[i]>even)
        {ans+=2;eve[i]-=even;odd-=eve[i];}
        else
        {
            even-=eve[i];
            eve[i]=0;
        }
       
    }
    
    // bad spaces all in one
    f=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            if(arr[i]%2 && f==0)
            ans++;
            if(arr[i]%2==0 && f==1 )
            ans++;
            if(arr[i]%2)
            f=1;
            else
            f=0;
        }
    }
    
    /// asnwer is showing answer is 3
        int i=0;
        while(arr[i]==0)
        i++;
        
        
        if(arr[i]%2)
        {
            if(i<=odd)
            odd-=i;
            else
            ans++;
        }
        else
        {
            if(i<=even)
            even-=i;
            else
            ans++;
        }
        i=n-1;
        while(arr[i]==0)
        i--;
        if(arr[i]%2)
        {
            if((n-1-i)<=odd)
            odd-=n-1-i;
            else
            ans++;
        }
        else
        {
            if((n-1-i)<=even)
            even-=n-1-i;
            else
            ans++;
        }
        cout << ans << endl;
    return 0;//4  ans
}
