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
Node* insertpos(Node *&head,int d,int pos){
    Node *ptr=new Node(d);
    Node*bet=head;
  int cnt=1;
  while(cnt<pos){
    bet=bet->next;
    cnt++;
   
  }

ptr->next=bet->next;
bet->next->prev=ptr;
bet->next=ptr;
ptr->prev=bet;
    

}

int main(){
 Node* head=new Node(10);
 Node* tail=head;
 cout<<"before inserting";
 print(head);
 
insertattail(tail,2);
insertattail(tail,8);
insertattail(tail,98);
insertattail(tail,23);
  cout<<"after inserting:"<<endl;
 print(head);

 insertpos(head,1,2);
 cout<<endl;
 print(head);
}