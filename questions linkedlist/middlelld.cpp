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
Node* getmiddle(Node * &head){
    if(head==NULL || head->next==NULL){
        return  head;
    }
    if(head->next->next==NULL){
        return head->next;
    }
    Node* fast=head->next;
    Node *slow=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
   cout<<slow->data;
}

int main(){
    Node * head= new Node(10);
    Node * tail=head;


   
    
    insertatend(tail,34);
    insertatend(tail,50);
     insertatend(tail,3);
    insertatend(tail,23);
    insertatend(tail,67);

    print(head);
    cout<<endl;
    getmiddle(head);

  
}