#include<bits/stdc++.h>
using namespace std;
void SumOFSubarray(int arr[],int n)
{
    int curr=0;
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=arr[j];
            cout<<curr<<endl;
        }
    }

    

}
int main()
{
    int n,a[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    SumOFSubarray(a,n);

    return 0;
}