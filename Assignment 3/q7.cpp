#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    cout << "\n enter the value of a = ";
    cin >> a;
    cout << "\n enter the value of b = ";
    cin >> b;

    //arithmetic operator (+,-,*,/);
    cout << "\n the addition = "<< a+b;
    cout << "\n the subtrection = "<< a-b;
    cout << "\n the multiplication = "<< a*b;
    cout << "\n the divsion = "<< (double)a/(double)b;

    //relationl operator (<,>,<=,>=,==,!=)
    cout << "\na < b = "<<(a<b)<<endl;
    cout << "a <= b = "<<(a<=b)<<endl;
    cout << "a > b = "<<(a>b)<<endl;
    cout << "a >= b = "<<(a>=b)<<endl;
    cout << "a == b = "<<(a==b)<<endl;
    cout << "a != b = "<<(a!=b)<<endl;

    //logical operator (&&,||,!)
    cout <<"\na && b = "<<(a&&b)<<endl;
    cout <<"a || b = "<<(a||b)<<endl;
    cout <<"a ! b = "<<(!b)<<endl;

    //bitwise operator
    cout << "\na & b = "<<(a & b)<<endl;
    cout << "a | b = "<<(a | b)<<endl;
    return 0;
}