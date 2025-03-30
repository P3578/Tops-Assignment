#include <iostream>
using namespace std;
int main ()
{
    // implicit;
    int a = 10;
    char ch = 'a';
    cout << "\n the value of a =  "<<a<<endl;
    cout << "\n the value of char = "<<ch<<endl;

    //explicit;
    int c,b;
    cout << "\n enter the value of c = ";
    cin >> c;
    cout << "\n enter the value of b = ";
    cin >> b;
    cout << "\n the division of "<<a<<" and " <<b<< " is = " <<(double)a/(double)b;
    return 0;
}