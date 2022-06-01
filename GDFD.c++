#include<bits/stdc++.h>
using namespace std;
class a{
    public:
        int points;
        
    };

int main()
{

    int avg=0;
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);

    for(int i=0;i<v.size();i++)
    {
      avg+= v[i].points;
    }
    return 0;
}