#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long count=1,max=0,maxm=0,flag=0;
   long long  int x=s.length(),i;
    for(i=0;i<x-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
            max=count;
        }
        else
        {
        	flag=1;
            count=1;
        }
        if(flag==1 && max>maxm)
        {
        	maxm=max;
        	flag=0;
		}
    }
     cout<< std::max(maxm,count);
}