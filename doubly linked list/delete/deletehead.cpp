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
Node *deletehead(Node *&head){
    Node* ptr=head;
    ptr->next->prev=NULL;
     head=ptr->next;
    ptr->next=NULL;
   
    delete ptr;
}
int main(){
 Node* head=new Node(10);
 Node* tail=head;
 cout<<"before inserting";
 print(head);
 
 insertattail(tail,2);
insertattail(tail,8);
cout<<"after inserting:"<<endl;
 print(head);
 cout<<"after deletng:"<<endl;
 deletehead(head);
 print(head);
}