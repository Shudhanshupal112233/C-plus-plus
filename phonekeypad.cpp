#include<iostream>
#include<string.h>
using namespace std;
string mapping(char c){
    if(c=='2')
    return "abc";
     if(c=='3')
    return "ghi";
     if(c=='4')
    return "jkl";
     if(c=='5')
    return "mno";
     if(c=='6')
    return "abc";
     if(c=='7')
    return "pqrs";
     if(c=='8')
    return "tuv";
     if(c=='9')
    return"wxyz";
return "";
}

int keypadcombination(string str,string output[]){
 if(str.length()==0){
    output[0]="";
    return 1;
 }
 int smalleroutputsize= keypadcombination(str.substr(1),output);
 string firstdigitpossiblechar= mapping(str[0]);
 string temp[1000];
 int k=0;
 for(int i=0;i<smalleroutputsize;i++){
    for(int j=0; j<firstdigitpossiblechar.length();j++){
        temp[k]=firstdigitpossiblechar[j]+output[i];
        k++;
    }
 }
 for(int i=0;i<k;i++){
    output[i]=temp[i];
 }
 return smalleroutputsize*firstdigitpossiblechar.length();
}
int main(){
 string output[1000];


 int outputsize= keypadcombination("237",output);
 for(int i=0;i<outputsize;i++){
    cout<<output[i]<<"\t";
 }
 
 }
