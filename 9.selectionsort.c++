#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n)
//find the min element in unsorted array and swap it with elementat begaining.
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }

        }

        

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    selectionSort(a,n);

    return 0;
}