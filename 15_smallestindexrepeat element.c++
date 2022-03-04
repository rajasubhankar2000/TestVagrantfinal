#include<bits/stdc++.h>
using namespace std;
void smallestIndexRepeat(int a[],int n)
{
    int ans;
    int i=0;
   while(i<n)
   {
     ans=a[i];
     
         for(int j=1;j<n;j++)
            {
             if(ans==a[j])
                {
                 cout<<ans<<endl;
                }
              else{
                  i+=1;
                }

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
     smallestIndexRepeat(a,n);

     return 0;
 }