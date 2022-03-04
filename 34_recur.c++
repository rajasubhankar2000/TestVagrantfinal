#include<bits/stdc++.h>
using namespace std;
bool checksorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restArr=checksorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArr);

}

int main()
{
    int n,a[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
    cout<<checksorted(a,n);


    return 0;
}