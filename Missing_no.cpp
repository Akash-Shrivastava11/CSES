#include<iostream>
using namespace std;
int main()
{
   long long n,a[200000000],sumb=0,sums=0;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sums+=a[i];
    }
    sumb=n*(n+1);
    sumb=sumb/2;
    long long d=sumb-sums;
    cout<<d;
}
