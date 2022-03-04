#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n)
{
    int i=1;
    while(i<n)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
        i++;
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
    bubbleSort(a,n);

    return 0;
}