#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int n=a;
    int sum=0;
    for(int i=2;i<n;i++)
    {
        if(a%i==0)
        {
            sum=sum+1;
        }
        
    }
    if(sum==0)
    {
        cout<<" prime";
    }
    else 
    {
        cout<<" non prime";
    }
    return 0;
}