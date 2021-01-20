#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
int data;
node* next;};
node* head=NULL;
void insert(int value){
    node*temp=new node();
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {   node* link=head;
        while(link->next!=NULL)
        {
            link=link->next;
        }
        temp->next=link->next;
        link->next=temp;
    }
}
void print()
{
    node* link=head;
    cout<<"\nThe list is:";
    while(link!=NULL)
    {
        cout<<link->data<<"\t";
        link=link->next;
    }
}
void del(int pos){
    node*link=head;
for(int i=1;i<pos-1;i++)
{
    link=link->next;
}
node* temp=link->next;
link->next=temp->next;
delete(temp);
}
void searching(int x)
{   int count=1;
    node *link=head;
    {
        while(link!=NULL){
            if (link->data==x){
            cout<<"\nELement found at location "<<&*link;
        break;}
            link=link->next;

        }
        if(link->next==NULL)
            cout<<"\nElement not found";
    }
}

main()
{ int ch,ipos,dpos,x,value;
   int e=1;
    while(e){
START:
  cout<<"1: Insert\n2: Delete\n3: Search\n4: Display";
  cout<<"\nEnter any choice";
  cin>>ch;
  switch(ch){
  case (1): cout<<"\nEnter value to be inserted";
            cin>>value;
            insert(value);
            break;
  case(2):
            cout<<"\nEnter position you want to delete";
            cin>>dpos;
            del(dpos);
            break;
  case (3):
            cout<<"\nEnter element to be searched";
            cin>>x;
            searching(x);
            break;
  case(4): print();
            break;
  default: cout<<"\nPlease enter correct choice";
            break;
                  }
                cout<<"\n To repeat, press 1 else 0\n";
                cin>>e;
                if(e==1)
                  goto START;
                  else return 1;
}
}


