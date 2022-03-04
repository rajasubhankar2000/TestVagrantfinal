#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node(int data)
  {
      this->data=data;
      next=NULL;
  }
};

node* takeInput()
{
    int data;
    cin >>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1)
    {
        node* n=new node(data);
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
void getOutput(node *head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int length(node *head)
{
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
void ithElement(node* head,int i)
{
    
    if(i<-1)
    {
        cout<<"-1";
        return;
    }
    int count=1;
    while(count<=i && head)
    {
      head=head->next;
      count++;
    }
    if(head)
    {
    cout<<head->data;
    }
    else
    {
        cout<<"-1";
    }
}


int main()
{
    node* head=takeInput();
    getOutput(head);
    cout<<endl;
    cout<<length(head);
    cout<<endl;
    ithElement(head,3);
}