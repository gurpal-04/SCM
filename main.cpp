#include <iostream>

using namespace std;
class Emp
{
    int empid;
    int empsal;
    public:
    Emp(int id=-5,int sal=0){
        this->empid=id;
        this->empsal=sal;
    }
    void display()
    {
        cout<<"id="<<empid<<endl<<"salary="<<empsal;
    }
};

int main()
{
    Emp emp1;
    emp1.display(); 
    Emp emp2(10,500);
    emp2.display();
}
