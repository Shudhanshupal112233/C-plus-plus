//getter and setter

// #include<iostream>
// using namespace std;
// class student{
//     private:
//     string name;
//     int age;
//     int height;
    
//     public:
//     int getage(){
//         return age;

//     }
//     int setage(int a){
//        age = a;
//     }
// };
// int main(){
//     student first;
//     first.setage(20);
//     cout<<"age is :"<<first.getage();
// }


//INHERITANCE
#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getweight(){
        return this->weight;
    }
    void setweight(int w){
        this->weight=w;
    }
};

    class male:private human{
    public:
    string color;
    int getheight(){
        return this->height;
    }
    void setheight(int h){
        height=h;

    }
  
};
int main(){
    male m1;
    // m1.setweight(20);
    // cout<<m1.getweight()<<endl;
    // m1.height=159;
    m1.setheight(189);
    cout<<m1.getheight();
}

