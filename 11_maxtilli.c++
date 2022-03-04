#include<bits/stdc++.h>
using namespace std;
int findMax(int a[],int n)
{
    int mx=-1000;
    
    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        

    }
    return mx;

}
int main()
{
    int n,a[n],test;
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<findMax(a,n);
    }
    

    return 0;
}