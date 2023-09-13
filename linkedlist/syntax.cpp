#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

};
void print(Node* &head){
    Node* ptr= new Node();
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main(){
    Node* head= new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();
    head->data=10;
    head->next=node2;
    node2->data=5;
    node2->next=node3;
    node3->data=14;
    node3->next=node4;
    node4->data=7;
    node4->next=NULL;
    print(head);
}




