#include<bits/stdc++.h>
using namespace std;
void reverseNumber(int x)
{
    int rem;
    while(x>0)
    {
    rem=x%10;
    cout<<rem;
    x=x/10;
    } 
}
int main()
{
    int n;
    cin>>n;
    reverseNumber(n);

    return 0;
}