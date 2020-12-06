#include<iostream>
using namespace std;
int main()
{
    long long n,t=0;
    int count=0;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long long i=0;i<n-1;i++)
    {
        if(!(a[i]<a[i+1]))
        {
            count=a[i]-a[i+1];
            t=t+count;
            a[i+1]+=count;
        }
        else
        {
            continue;
        }
        
        
    }
    cout<<t;
}