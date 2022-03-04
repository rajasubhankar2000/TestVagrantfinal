#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int key,int n)
{
    
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            return i;
        }
        
    }
    return -1;
    

}
int main()
{
    int key,n,a[n];
    cout<<"enter the size of array "<<endl;
    cin>>n;
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key have to search"<<endl;
    cin>>key;
    cout<<linearSearch(a,key,n);


  return 0;  
}