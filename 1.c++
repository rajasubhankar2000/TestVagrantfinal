#include<bits/stdc++.h>
using namespace std;

int maxthree(int n, int p, int q)
{
    if(n>p && n>q)
    {
        return n;
    }
    else if(p>n && p>q)
    {
        return p;
    }
    else
    {
        return q;
    }


}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<maxthree(a,b,c);

    return 0;
}