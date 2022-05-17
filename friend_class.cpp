
#include <iostream>

using namespace std;

class xyz {
    private:
    int num=100;
    friend class abc;
};

class abc{
    public:
    void disp(xyz obj){
        cout<<obj.num;
    }
};

int main()
{
    //cout<<"Hello World";
    abc obj;
    xyz obj1;
    obj.disp(obj1);

    return 0;
}