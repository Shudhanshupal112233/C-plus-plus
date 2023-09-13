#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int d){
        this->data=d;
        this->next=NULL;

    }
 
};
void inserttail(Node *&tail,Node *&head,int d){
    Node *ptr=new Node(d);
    tail->next=ptr;
    ptr->next=head;
    tail=ptr;

}
void print(Node *&head){
    Node *ptr=head;
    do{
     cout<<ptr->data<<endl;
    ptr=ptr->next;
    }while(ptr!=head);
      
    
    
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
Node* flyoddetect(Node *head){
     if(head==NULL){
        return NULL;
    }
    Node *fast=head;
    Node* slow=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            return slow;
        }
    }
    }


Node * getstartingnode(Node *head){
    Node* interstion = flyoddetect(head);
    Node* slow=head;
    while(slow!=interstion){
        slow=slow->next;
        interstion=interstion->next;
       }
    return slow;
}
void removeloop(Node* head){
    Node* startloop =  getstartingnode(head);
    Node* ptr=startloop;
    while(ptr->next!=startloop){
        ptr=ptr->next;

    }
    ptr->next==NULL;

}
int main(){
    Node *head=new Node(10);
    Node *tail=head;
    // Node * second=new Node();

    // Node *first=new Node();
    // head->data=10;
    // head->next=first;
    // first->data=2;
    // first->next=second;
    // second->data=4;
    // second->next=head;
    inserttail(tail,head,3);
    inserttail(tail,head,8);
    inserttail(tail,head,5);

   print(head);
// //    bool x=detectloop(head);
// bool x=flyoddetect(head);
//    if(x){
//     cout<<"loop found";
//    }
//    else{
//     cout<<"loop absent";
//    }
  Node*f= getstartingnode(head);
  cout<<"found at:"<<f->data;
  removeloop(head);
  bool x=flyoddetect(head);
   if(x){
    cout<<"loop found";
   }
   else{
    cout<<"loop absent";
   }

   
   }