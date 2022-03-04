#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[] ,int n,int key){

     int left=0,right=n;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==key)
        
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;
 
}
int main()
{
    int n,a[n],key;
    cout<<"size of array"<<endl;
    cin>>n;
    cout<<"element in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the have to search"<<endl;
    cin>>key;
    cout<<binarySearch(a,n,key);

    return 0;

}