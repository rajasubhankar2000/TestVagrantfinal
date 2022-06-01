#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>mymap;
    for(int i=1;i<6;i++)
    {
        mymap["abc"+i]=i;
    }
    unordered_map<string,int>::iterator it;
    for(it=mymap.begin();it!=mymap.end();it++)
    {
        cout<<"key :"<<it->first<<"   value :"<<it->second<<endl;;
    }
    map<string,int>mymap2;
    for(int i=1;i<6;i++)
    {
        mymap2["abc"]=i;
    }
    map<string,int>::iterator itt;
    for(itt=mymap2.begin();itt!=mymap2.end();itt++)
    {
        cout<<"key :"<<itt->first<<"   value :"<<itt->second<<endl;;
    }
    return 0;
}