#include<bits/stdc++.h>
using namespace std;


void mergesort(int a[],int l, int r)
{
    
   while(l<r){
       int mid=(l+r)/2;
       mergesort(a,l,mid);
       mergesort(a,mid+1,r);

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
    int l=0;
    int r=n;
    mergesort(n,l,r);
    
    
    return 0;
}