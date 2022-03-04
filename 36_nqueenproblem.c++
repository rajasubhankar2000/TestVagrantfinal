#include<bits/stdc++.h>
using namespace std;
int pairsum(int n)
{
    for(int i=0;i<=n/2;i++)
    {
        for(int j=n/2;j<=n;j++)
        {
            if(i+j==n)
            {
                cout<<"{"<<i<<","<<j<<"}";
            }
            
        }
    }
}
int main()
{
 int n;
 cin>>n;
 pairsum(n);
 return 0;
}
