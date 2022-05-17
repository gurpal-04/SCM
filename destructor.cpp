#include <iostream>

using namespace std;

class demo{
    int x;
    public:
    demo (int p=0){
        x=p;
    }
    ~demo(){
        cout<<"obj delete";
    }
};

int main(){
    demo obj;


    return 0;
}