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
Node* insertatpos(Node *&head,int pos,int d){
    Node *bet= head;
    int cnt=1;
    while(cnt<pos-1){
        bet=bet->next;
        cnt++;
    }
      Node * nodetoinsert= new Node(d);
      nodetoinsert->next=bet->next;
      bet->next=nodetoinsert;
   


    }

void print(Node* &head){
    Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next   ;
    }

}
int main(){
    Node * head= new Node(10);
 Node * tail=head;


    cout<<"before inserting:"<<endl;
    
    
    insertatend(tail,34);
    insertatend(tail,50);
    insertatend(tail,87);
   
    print(head);
    cout<<"after inserting:"<<endl;
    insertatpos(head,3,56);
    print(head);
}