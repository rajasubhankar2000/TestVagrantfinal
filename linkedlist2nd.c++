#include<bits/stdc++.h>
using namespace std;
class linkedlist{
    public:
    int data;
    linkedlist* next;
    linkedlist(int data)
    {
        this->data=data;
        next=NULL;
    }



};
int main()
{
    linkedlist *p1=new linkedlist(1);
    linkedlist *p2=new linkedlist(2);
    linkedlist *p3=new linkedlist(3);
    p1->next=p2;
    p2->next=p3;
    

    return 0;

}