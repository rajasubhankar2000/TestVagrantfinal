#include<bits/stdc++.h>
using namespace std;
void checkPalindrom(char arr[],int n)
{
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
          check=0;
        }
    }
    if(check==1)
    {
        cout<<"char is palindom";
    }
    else{
        cout<<"char is not a palindrom";
    }
}

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    checkPalindrom(arr,n);

    return 0;
}