#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int d){
        this->data=d;
        this->next=NULL;

    }
 
};
void print(Node *head){
    Node *ptr=head;
    do{
     cout<<ptr->data<<endl;
    ptr=ptr->next;
    }while(ptr!=head);
      
    
    
}
void inserthead(Node* &head,Node *&tail,int d){
       Node* ptr= new Node(d);
       ptr->next=tail;
       head->next=ptr;
       tail=ptr;
}
int main(){
    Node *head=new Node(10);
    Node *tail=head;
    // Node * second=new Node();

    // Node *first=new Node();
    // head->data=10;
    // head->next=first;
    // first->data=2;
    // first->next=second;
    // second->data=4;
    // second->next=head;
    inserthead(head,tail,3);
    inserthead(head,tail,12);
    inserthead(head,tail,9);
   print(tail);

}