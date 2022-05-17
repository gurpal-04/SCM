#include<iostream>
using namespace std;
class rectangle
{public:
    int len,bre;
 public :
 rectangle()
 {
     len=5,bre=2;
 }
 rectangle(int p)
 {
     len=p,bre=2;
 }
 rectangle(int p,int q)
 {
     len=p,bre=q;
 }
 void area()
 {
 cout <<"area"<<(len*bre);
}
};
class cuboid: public rectangle
{
    int hgt;
    public:
    cuboid(){
        hgt=15;
    }
    cuboid(int p){
        hgt=p;
    }
    // cuboid(){
        // hgt=15;
    // }
    void volume(){
        cout<<"volume: "<<(len*bre*hgt);
    }
};
int main()
{

    cuboid obj1;
    obj1.volume();
    

    return 0;
}
