#include<iostream>
#include<string.h>
using namespace std;
void  solve(char *num,int index,int n){
    if(index==n){
          cout<<num;
    }
    else{
    for(int j=index;j<n;j++){
        swap((num+index),(num+j));
        solve(num,index++,n);

        swap((num+index),(num+j));
    }}

}
void swap(char *c1,char *c2){
        char temp;
        temp=*c1;
        *c1=*c2;
        *c2=temp;
    }
int main(){
    int index=0;
    char num[10];
    cout<<"enter the string";
    cin>>num;
    int n=strlen(num);
    solve(num,index,n-1);
    

}