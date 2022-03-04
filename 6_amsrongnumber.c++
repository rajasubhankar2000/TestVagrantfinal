#include<bits/stdc++.h>
using namespace std;
void amsrongNumber(int n){
    int sum=0;
    int rem;
    int number=n;
    while (n>0)
    {
        
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    cout<<sum<<endl;

    if(sum==number)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    

}
int main()
{
    int n;
    cin>>n;
    amsrongNumber(n);

    return 0;
}