#include<bits/stdc++.h>
using namespace std;
void MaxSubarraySum(int a[], int n)
{
    int curr=0;
    int mx=-1000;
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=a[j];
            
        }
        mx=max(mx,curr);
        
    }
    cout<<mx<<endl;
}


int main()
{
    int n,a[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    MaxSubarraySum(a,n);

    return 0;
}