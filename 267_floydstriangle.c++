#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int count=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count<<" " ;
            count++;
        }
        cout<<endl;
    }
}
int main()
{

    int n;
    cin>>n;
    pattern(n);
    return 0;
}