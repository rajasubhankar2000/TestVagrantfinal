#include<bits/stdc++.h>
using namespace std;
vector<int>remDupli(int a[],int key)
{
    vector<int>result;
    unordered_map<int,bool>mymap;
    for(int i=0;i<key;i++)
    {
        if(mymap.count(i)==0)
        {
          result.push_back(a[i]);
        }

    }
    return result;
}
int main()
{
    int a[10]={1,4,2,3,7,1,4,2,4,7};
    cout<<remDupli(a,10);
}