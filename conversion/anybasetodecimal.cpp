#include<iostream>
using namespace std;
int con(int b){
    int rem;
     int ans=0;
    int power=1;
   while(b!=0){
    rem=b%10;
    ans+=rem*power;
    b=b/10;
    power*=2;


   }
    return ans;
}
int main(){
    int n,b;
    cout<<"enter base no.: ";
    cin>>b;
    cout<<con(b);

}