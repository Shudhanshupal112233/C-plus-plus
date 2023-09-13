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
        cout<<ptr->data<<"\t";
        
        ptr=ptr->next   ;
    }

}
Node *getmiddle(Node *head){
    Node *slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

    }
    return slow;
}
Node* getrev(Node* head){
    Node* prev=NULL;
    Node * curr= head;
    Node * next= NULL;
    while(curr!=NULL ){
        next==curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }
    return prev;
}
bool ispalindrome(Node *head){
  Node *middle= getmiddle(head);
  Node *temp=middle->next;
  middle->next= getrev(temp);
Node * head1=head;
Node * head2=middle->next;
  while(head2!=NULL ){
    if(head1->data!=head2->data){
        return false;
    }
    head1=head1->next;
    head2=head2->next;

  }
  temp=middle->next;  
  middle->next= getrev(temp);
  
  return true;

}
int main(){
    Node * head= new Node(1);
   Node * tail=head;


    insertatend(tail,2);
    insertatend(tail,3);
    
    insertatend(tail,3);
    
    insertatend(tail,2);
    insertatend(tail,1);
    
    print(head);
    cout<<endl;

    bool s=ispalindrome(tail);
    
    if (s==true){
        cout<<"linkedlist is palindrome "<<endl;
    }
    else{
        cout<<"linkedlist is not palindrome";
    }
    
    }