#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>mymap;
    pair<string,int>p("abc", 1);
    mymap.insert(p);
    cout<<mymap["abc"]<<endl;
    cout<<mymap.size()<<endl;
    cout<<mymap["ghy"]<<endl;
    if(mymap.count("ghy")>0) 
    {
     cout<<"present";
    }
    else{
        cout<<"not present";
    }

    return  0;

}