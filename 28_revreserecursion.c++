#include<bits/stdc++.h>
using namespace std;
void reversestring(string s)
{
    if(s.length()==0)
    {
        return ;
    }
    string ros=s.substr(1);
    reversestring(ros) ;
    
    cout<<s[0];
}

int main()
{
    reversestring("binod");

    return 0;
}
