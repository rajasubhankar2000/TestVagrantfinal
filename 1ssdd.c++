#include<bits/stdc++.h>
using namespace std;
class complex
{
    public:
    int img;
    int real;
    complex(int img,int real)
    {
        this->img=img;
        this->real=real;
    }
    
    complex operator+ (complex const &obj)
    {
     complex x;
     x.img=img+obj.img;
    }
}
int main()
{ 
    complex c1(10,2),c2(5,7);
    c3=c1+c2;


}