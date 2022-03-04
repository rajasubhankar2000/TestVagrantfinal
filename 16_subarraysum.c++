#include<bits/stdc++.h>
using namespace std;
void SubarraySum(int a[],int n,int s){
    int curr;
    for(int i=1;i<n;i++)
    {
        curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=a[j];
            if(curr==s)
            {
                cout<<j;
            }
            

        }
    }

}

int main()
{
    int n,a[n],s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    SubarraySum(a,n,s);


    return 0;
}