#include <iostream>
using namespace std;
double add (double , double);//function definition
double add (double n1,double n2)//function declaration
{
    return n1 + n2;
}
double subtract (double , double);//function definition
double subtract (double n1,double n2)//function declaration
{
    return n1 - n2;
}
double multi (double , double);//function definition
double multi (double n1,double n2)//function declaration
{
    return n1 * n2;
}
double divide (double , double);//function definition
double divide (double n1,double n2)//function declaration
{
    return n1 / n2;
}
int main ()
{
    double n1,n2;
    char operation;
    cout << "\n enter the number = ";
    cin >> n1;
    cout << "\n enter the number = ";
    cin >> n2;
    cout << "\n enter the operation (+,-,*,/)";
    cin >> operation;
    switch (operation)
    {
        case '+':
            cout << "result :"<<add(n1,n2)<<endl;//function calling
        break;
        case '-':
            cout << "result :"<<subtract(n1,n2)<<endl;//function calling
        break;
        case '*':
            cout << "result :"<<multi(n1,n2)<<endl;//function calling
        break;
        case '/':
            cout << "result :"<<divide(n1,n2)<<endl;//function calling
        break;
        default :
            cout << "invalide operation."<<endl;
        break;
    }
    return 0;
}