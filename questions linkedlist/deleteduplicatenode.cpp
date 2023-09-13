#include<iostream>
#include<map>
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
        cout<<ptr->data<<endl;
        ptr=ptr->next   ;
    }

}
Node *duplicatenode(Node *&head){
 if(head==NULL){
    return NULL;
 }
 Node* curr= head;

 while(curr!=NULL ){

 if((curr->next!=NULL) && curr->data==curr->next->data){
     Node*next_next=curr->next->next;
     Node *todelte=curr->next;
    curr->next=next_next;
    delete(todelte);

 }
 else{
    curr=curr->next;
 }
 }
 return head;
}
int main(){
    Node * head= new Node(10);
   Node * tail=head;


    cout<<"before inserting:"<<endl;
    print(head);
    
    insertatend(tail,34);
    insertatend(tail,34);
    insertatend(tail,34);
    insertatend(tail,50);
    cout<<"after inserting:"<<endl;
    print(head);
    duplicatenode(head);
     cout<<"after deleteing dulpicate nodes:"<<endl;
    print(head);
    
    }