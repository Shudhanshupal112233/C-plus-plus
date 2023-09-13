#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
       this->data=d;
       this->next=NULL;
       this->prev=NULL;
    }

};
void print(Node* &head){
    Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
Node *insertattail(Node *&tail,int d){
    Node* ptr= new Node(d);
    ptr->prev=tail;
    tail->next=ptr;
    tail=ptr;

}
Node *deletepos(Node *&head,int pos){
  Node* curr=head;
  Node *prev=NULL;
  int cnt=1;
  while(cnt<pos){
   prev=curr;
   curr=curr->next;
   cnt++;
  }
  prev->next=curr->next;
  curr->prev=NULL;
  curr->next->prev=prev;
  curr->next=NULL;
}

int main(){
 Node* head=new Node(10);
 Node* tail=head;
 cout<<"before inserting";
 print(head);
 
 insertattail(tail,2);
insertattail(tail,8);
insertattail(tail,76);
insertattail(tail,56);

cout<<"after inserting:"<<endl;
 print(head);
 cout<<"after deletng:"<<endl;
 deletepos(head,3);
 print(head);
}

