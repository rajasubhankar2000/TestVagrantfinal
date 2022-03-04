#include<bits/stdc++.h>
using namespace std;
int power(int n,int k)
{
    if(k==0)
  {
      return 1;
  }1.
   
  int prev=pow(n,k-1);
  return n*prev;
  
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<power(n,k);

    return 0;
}
