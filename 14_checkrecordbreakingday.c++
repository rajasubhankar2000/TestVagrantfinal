#include<bits/stdc++.h>
using namespace std;
void recordBreakingday(int arr[],int n)
{
    int rbd=arr[0];
    int j=1;
    int count=0;
    while(j<n)
    {
        rbd=max(rbd,arr[j]);
        
        if(rbd==arr[j])
        {
        count++;
        }
        j++;
        
    }
    cout<<count<<endl;


}



int main()
 {
     int n,a[n];
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     recordBreakingday(a,n);

     return 0;
 }