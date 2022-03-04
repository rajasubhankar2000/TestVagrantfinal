#include<bits/stdc++.h>
using namespace std;
void toh(int n ,char src ,char des,char helper)
{
    if(n==0)
    {
        return;
    }
   toh(n-1,src,helper,des);
   cout<<"move from "<<src<<" to "<<des<<endl;
   toh(n-1,helper,des,src);
}
int main()
{
 toh(3,'a','b','c'); 
}