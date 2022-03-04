#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int pos)
{
    return ((n&(1<<pos))!=0);

}
int setbit(int k,int poss)
{
    return ((k|(1<<poss)));
     
}
int clearbit(int n,int pos)
{
    int mask=~(1<<pos);
    return ((n&mask));
}
int updatebit(int n, int pos,int value)
{
    int mask=~(1<<pos);
    n=n&mask;
    return(n|(value<<pos));
}
int main()
{
    cout<<getbit(5,1)<<endl;
    cout<<setbit(6,0)<<endl;
    cout<<clearbit(5,0);

} 