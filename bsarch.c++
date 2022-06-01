#include<bits/stdc++.h>
using namespace std;
int bsearch(int n,int a[],int key)
{
    int s=0;
    int e=n-1;
    
    for(int i=0;i<n;i+=2)
    {
        int mid=((s+e)/2);
     if(a[mid]==key)
     {
         return mid;
     }
     else if(a[mid]>key)
     {
         e=mid-1;

     }
     else{
         s=mid+1;
     }
    }
}
int main()
{
    int n,key;
    
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    cout<<bsearch(n,a,key);
    return 0;

}