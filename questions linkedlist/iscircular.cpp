#include<iostream>
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
bool iscircular(Node *&head){
   if(head==NULL);
   return true;
   Node *ptr=head->next;
   while (ptr!=NULL && ptr!=head)
   {
    ptr=ptr->next;
   }
  if(ptr==head){
  return true;}

  return false;
   

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
   if(iscircular(tail)){
    cout<<"circular in nature";
   }
   else{
    cout<<"not circular in nature";
   }

}