#include <iostream>

using namespace std;
class ComplexNum
{
    int real, imaginary;
    public:
    
    
    void read()
    {
        cout<<"\n Enter real part: ";
        cin>>real;
        cout<<"\n Enter imaginary part: ";
        cin>>imaginary;
    }
    void display()
    {
        if(imaginary<0)
        cout<<endl<<real<<imaginary <<"i";
        else
        cout<<endl<<real<<"+"<<imaginary<<"i";
        
    }

    ComplexNum operator + (ComplexNum &C1)
    {
        ComplexNum C3;
        C3.real = this->real + C1.real;
        C3.imaginary = this->imaginary + C1.imaginary;
    
        return C3;
    }
};
int main()
{
    ComplexNum C1,C2;
    
    C1.read();
    C2.read();
    
    
    ComplexNum res;
    res=C1 + C2;
    res.display(