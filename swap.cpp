#include <iostream>
using namespace std;
void swap(int *a ,int *b){
    int c=*a;
    *a=*b;
    *b=c;
    return;
}
int main()
{   int a=5,b=7;

    cout<<a<<b;
    swap(a,b);
    cout<<a<<b;
    
}