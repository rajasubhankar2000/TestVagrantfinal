#include<bits/stdc++.h>
using namespace std;
void checkprime(int n)
{
    int i=2;
    int sum=0;
    while( i<n)
    {
        if(n%i==0)
        {
            sum+=1;
        }
        i++;
        
    }
    if(sum>=1)
    {
        cout<<"non prime";
    }
    else
    {
        cout<<"prime";
    } 

}


int main()
{
    int n;
    cin>>n;
    checkprime(n);

    return 0;
}