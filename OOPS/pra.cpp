#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    int lvl;
    int  gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }



};

int main(){
  hero h1;
  h1.sethealth(22);
  h1.lvl=1;
  cout<<"health"<<h1.gethealth()<<endl;
   cout<<"level"<<h1.lvl;
}