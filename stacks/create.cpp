#include<iostream>
#include<stack>
using namespace std;
int main(){
    
    //creating stack
    stack<int> s;
    
    //pushing elements
    s.push(2);
    s.push(3);

    //poping elements
    s.pop();
    s.pop();

    cout<<"printing the elements:"<<s.top()<<endl;
    //checking empty
    if(s.empty()){
        cout<<"stack is empty";
    }
    else{
        cout<<"stack is not empty";
    }


    return 0;
}