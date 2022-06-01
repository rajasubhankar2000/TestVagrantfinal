#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    char c[n];
    strcpy(c,s.c_str());

    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<endl;
        int x=i-1;
        int y=i+1;
        while(x>=0 and y<n and s[x]==s[y])
        {
         for(int j=x;j<=y;j++)
         {
             cout<<c[j];
             
         }
         cout<<endl;
         x--;
         y++;
        }
        
        x=i;y=i+1;
        while(x>=0 and y<n and s[x]==s[y])
        {
            for(int j=x;j<=y;j++)
         {
             cout<<c[j];
             
         }
         cout<<endl;
            
            x--;
            y++;
        }
    }
    cout<<endl;

}