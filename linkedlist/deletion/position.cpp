#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};
Node * insertatend(Node *&tail,int d){
    Node *temp=new Node(d);
     tail->next=temp;
    tail=temp;

}
Node *deleteatpos(Node *&head,int pos){
    if(pos==1){
    Node *ptr=head;
    head=head->next;
    ptr->next=NULL;
    delete ptr;
    
    }
    else{
        Node *prev=NULL;
         Node *curr=head;

    int cnt=1;
    while(cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;
      
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    
    }

}
void print(Node* &head){
    Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next   ;
    }

}


int main(){
    Node * head=new Node(10);
    Node *tail=head;
    
    cout<<"before deleting"<<endl;
    insertatend(tail,34);
    insertatend(tail,50);
    insertatend(tail,6);
    insertatend(tail,2);
    print(head);
    cout<<"after deleting"<<endl;
    deleteatpos(head,3);
    print(head);

}