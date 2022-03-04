#include<bits/stdc++.h>
using namespace std;

template<typename t>
class paired{
    t x;
    t y;
    public:
    void setx(t x)
    {
        this->x=x;
    }
    t getx()
    {
     return x;
    }
    void sety(t y)
    {
        this->y=y;
    }
    t gety()
    {
        return y;
    }

};
int main()
{
    paired<int>p1;
    p1.setx(5);
    p1.sety(13);
    cout<<p1.getx()<<" "<<p1.gety()<<endl;
   
   paired<string>p2;
    p2.setx("hi");
    p2.sety("hello");
    cout<<p2.getx()<<" "<<p2.gety();

    return 0;
}