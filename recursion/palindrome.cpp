#include<iostream>
using namespace std;
bool reverse(string name,int i,int j){
    if(i>j){
        return true ;
    }
    if(name[i]!=name[j]){
        return false;
    }
    else{
        reverse(name,i+1,j-1);
    }

}
int main(){
    string name="ababbba";
    bool palindrome=reverse(name,0,name.length()-1);
    if(palindrome){
        cout<<"palindrme";
    }
    else{
        cout<<"not palindrome";
    }
}