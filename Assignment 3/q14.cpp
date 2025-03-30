#include <iostream>
using namespace std;
int b = 10;//global variable
void s()
{
    int a = 25;//local variable
    cout << "\n the value of a = "<<a;
}
int main ()
{
    cout << "\n the value of b = "<<b;
    s();
    //  after function calling I change the value of a;
    int a = 10;
    // than call function but the value of a is not chage because it is a local veriable;
    s();
    int b = 25;
    // I change the value of b and print it again;
    cout << "\n the value of b = "<<b;
    // the value of b is change because it is a global variable;
    return 0;
}