#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* insertatend(Node * &tail,int d){
    Node * temp= new Node(d);
    tail->next=temp;
    tail=temp;

}
void print(Node* &head){
    Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"\t";
        ptr=ptr->next   ;
    }

}
void reverse(Node *&head){
    Node *prev=NULL;
    Node *curr=head;
     Node* forward=NULL;
    while(curr!=NULL){
       forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        }
        head=prev;
    

}
int main(){
    Node * head= new Node(10);
    Node * tail=head;


   
    
    insertatend(tail,34);
    insertatend(tail,50);
     insertatend(tail,3);
    insertatend(tail,23);
    cout<<"before reversing:"<<"\t";
    print(head);
   cout<<"after reversing:";
   reverse(head);
   print(head);
}