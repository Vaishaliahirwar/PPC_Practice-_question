//WAP in c++ base on single inheritance 
# include <iostream>
using namespace std ;


class vehicle{
    public:
    void start (){
        cout <<" vehicle stared..."<<endl;
    }
 void stop (){
    cout <<"vehicle stoped..."<<endl;
 }
}
 class fortuner : public vehicle{
    public:
    void speed(){
        cout<<"200km/h"<<endl
    }
 };

 int main (){

    fortunermy car;
    mycar.start();
    mycar.speed();
    mycar.stop();  
    
    return 0;
 }