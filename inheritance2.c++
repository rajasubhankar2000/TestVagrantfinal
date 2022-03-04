#include<bits/stdc++.h>
using namespace std;
class inheritace
{
 public:
 void func()
 {
     cout<<"inheritace";

 }
};
class B:public inheritace
{
 
};
int main()
{
    B b;
    b.func();
    return 0;
}