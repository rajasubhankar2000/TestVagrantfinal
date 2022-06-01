#include<bits/stdc++.h>
using namespace std;
void bsort(int n,int a[])
{
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(a[j]>a[j+1])
           {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
   for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bsort(n,a);
    
    
    return 0;
}