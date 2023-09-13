// reverse an array
#include<iostream>
using namespace std;
// int main(){
//     int arr[6]={11,7,3,12,4,54};
//     int s=0;
//     int e=5;
//     int t= e;
//     while(s<=e){
        
        
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
//     for(int i=0;i<=t;i++){
//         cout<<arr[i]<<"\t";
//     }
// }

//merge two array
// void merge(int arr1[],int arr2[],int n,int m,int arr3[]){
//     int i=0;
//     int j =0;
//     int z=0;
//     int o=8;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[z]=arr1[i];
//             i++;
//             z++;
//         }
//         else{
//             arr3[z]=arr2[j];
//             j++;
//             z++;
//         }
        
//     }
//     while(i<n){
//         arr3[z]=arr1[i];
//         z++;
//         i++;
//     }
//     while(j<m){
//         arr3[z]=arr2[j];
//         z++;
//         j++;
//     }
//     for(int i=0;i<o;i++){
//         cout<<arr3[i]<<"\t";
//     }
// }
// int main(){
//     int arr1[5]={1,3,5,7,9};
//     int arr2[3]={2,4,6};
//     int arr3[8]={0};
//     merge(arr1,arr2,5,3,arr3);

// }




// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     int i=m-1;
//     int j =n-1;
   
//     int z=m+n-1;
    
//     while(i>=0 && j>=0){
//         if(nums1[i]>nums2[j]){
//             nums1[z]=nums1[i];
//             i--;
//             z--;
            
//         }
//         else{
//             nums1[z]=nums2[j];
//             j--;
//             z--;
//         }
        
//     }
//     while(i>=0){
//         nums1[z]=nums1[i];
//         z--;
//         i--;
//     }
//     while(j>=0){
//         nums1[z]=nums2[j];
//         z--;
//         j--;
//     }
//     }
// };


// 

// int main(){
//     int arr[5]={0,1,0,3,12};
//      int i=0;
//         for(int j=0;j<5;j++){
//             if(arr[j]!=0){
//                 swap(arr[j],arr[i]);
//                 i++;
//             }
//         }
    
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<"\t";
//     }
// }

class items{
    public:
    int data;
    int itemprice;
    items *next;
    items(int data){
        this->data=data;
        this->next=NULL;
    }
     
};
// void items :: additem(){
//     cout<<"enter the code"<<endl;
//     cin>>code[count];
//     cout<<"enter the price"<<endl;
//     cin>>itemprice[count];
//     count++;

// }
// void items :: display(){
//    int sum=0;
//    for(int i=0;i<count;i++){
//        sum=sum+itemprice[i];
//    }
//    cout<<"the total value of list :"<<sum;

// }
// void items :: remove(){
//    int a;
//    cout<<"enter the item code to remove";
//    cin>>a;
//    for(int i=0;i<count;i++){
//     if(code[i]==a){
//         itemprice[i]=0;

//     }
       
//    }
   

// }
// void items :: alldisplay(){
   
//    for(int i=0;i<count;i++){
//        cout<<code[i]<<"\t"<<itemprice[i];
//    }
   

// }
items* insertatend(items * &tail,int d){
    items * temp= new items(d);
    tail->next=temp;
    tail=temp;

}
void print(items* &head){
    items* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next   ;
    }
}

int main(){
   
    
     cout<<"1.add item\n2.total price of list\n3.remove an item\n4.dispaly all item\nexit";
        int choice;
        cout<<"enter the choice";
        cin>>choice;

    do{
        
        switch(choice){
            case 1:
                items *head1 = new items(1);
                items * tail=head1;
                 insertatend(tail,2);
                print(head1);
                 break;
            // case 2:
            //     i1.display();
            //     break;
            // case 3:
            //     i1.remove();
            //     break;
            // case 4:
            //     i1.alldisplay();
            //     break; 
            // case 5:
            //    break;   


        }

    }while(choice==5);
}
