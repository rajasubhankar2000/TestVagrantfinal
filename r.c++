#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string r="";
    
    char b[s.length()];
    strcpy(b, s.c_str());
    for(int i=s.length()-1;i>=0;i--)
    {
        r=r+b[i];
    }
    cout<<r;
    return 0;
}