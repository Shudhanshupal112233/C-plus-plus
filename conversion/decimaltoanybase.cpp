#include<iostream>
using namespace std;
int con(int n,int b){
    int rem;
    int ans=0;
    int power=1;
    while(n!=0){
        rem=n%b;
        n=n/b;
        ans+=(rem*power);
        power*=10;

    }
    return ans;
}
int main(){
    int n,b;
    cout<<"enter the decimal no. and base u want to convert:";
    cin>>n>>b;
    cout<<con(n,b);

}