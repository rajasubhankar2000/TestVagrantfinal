#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>*vp= new vector<int>();//dynamic 
    vector<int>v;//static
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    for(int i=0;i<100;i++)
    {
        v.push_back(i+1);
        cout<<v.size()<<endl; 
    }
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<endl;
    }
    return 0;
}