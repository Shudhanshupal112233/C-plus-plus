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
// bool detectloop(Node *head){
//     if(head==NULL){
//         return false;
//     }
//     map<Node*,bool> visited;
//     Node *ptr=head;
//     while(ptr!=NULL){
//         if(visited[ptr]==true){
//             return true;
//         }
//         visited[ptr]=true;
//         ptr=ptr->next;
//     }
//     return false;

// }
// bool flyoddetect(Node *head){
//      if(head==NULL){
//         return false;
//     }
//     Node *fast=head;
//     Node* slow=head;
//     while(slow!=NULL && fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;

//         if(slow==fast){
//             return 1;
//         }
//     }
//     return 0;

// }
int main(){
    Node * head= new Node(10);
   Node * tail=head;


    cout<<"before inserting:"<<endl;
    print(head);
    
    insertatend(tail,34);
    insertatend(tail,50);
    cout<<"after inserting:"<<endl;
    print(head);
//      bool x=detectloop(head);
//    if(x){
//     cout<<"loop found";
//    }
//    else{
//     cout<<"loop absent";
// //    }
// // bool x=flyoddetect(head);
//    if(x){
//     cout<<"loop found";
//    }
//    else{
//     cout<<"loop absent";
//    }

 
}