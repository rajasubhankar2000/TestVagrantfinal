#include<bits/stdc++.h>
using namespace std;
int max(int n,int arr[])
{
    int max=-10;
    for(int i=0;i<n;i++)
    {
        
     if(arr[i]>max)
     {
        
        max=arr[i];
     }
    }
        return max;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<max(n,arr);
    return 0;
}