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
void insertathead(Node *&head,int d){
Node* ptr=new Node(d);
 head->prev=ptr;
 ptr->next=head;
 head=ptr;

}
void print(Node* &head){
    Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main(){
 Node* head=new Node(10);
 cout<<"before inserting";
 print(head);
 
 insertathead(head,2);
insertathead(head,8);
  cout<<"after inserting:"<<endl;
 print(head);
}