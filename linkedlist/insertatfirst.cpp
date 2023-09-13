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
void print(Node* &head){
    Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next   ;
    }

}
Node* insertatfirst(Node* &head,int d){
    Node * temp=new Node(d);
    // temp->data=data;
    temp->next=head;
    head=temp;
    // return head;

}

int main(){
    Node * head = new Node(10);
    // Node * node2 = new Node();
    // Node * node3 = new Node();
    // Node * node4 = new Node();
    // head->data=10;
    // head->next=node2;
    // node2->data=5;
    // node2->next=node3;
    // node3->data=14;
    // node3->next=node4;
    // node4->data=7;
    // node4->next=NULL;
    cout<<"before inserting:"<<endl;
    print(head);
    insertatfirst(head,50);
    insertatfirst(head,12);
    cout<<"after inserting:"<<endl;
    print(head);

    
}