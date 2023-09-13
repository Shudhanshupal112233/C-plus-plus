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
Node *sort(Node *head){
    int zero=0;
    int first=0;
    int second=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
        }
        else if(temp->data==1){
            first++;
        }
        else if(temp->data==2){
            second++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp->next!=NULL){
        if(zero!=0){
            temp->data=0;
            zero--;
        }
        else if(first!=0){
            temp->data=1;
            first--;

        }
        else if(second!=0){
            temp->data=2;
            second--;

        }
        temp=temp->next;
    }
    return head;
}
int main(){
    Node * head= new Node(1);
   Node * tail=head;


 
    
    insertatend(tail,0);
    insertatend(tail,2);
     insertatend(tail,1);
    insertatend(tail,2);

     print(head);
    cout<<endl;
     sort(head);
     print(head);
}