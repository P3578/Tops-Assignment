#include <iostream>
using namespace std;
class Calculator
{
    public ://access specifire
    int add (int n1,int n2)//function declaration
    {
        int result = n1 + n2;
        return result;
    }
    int sub (int n1,int n2)//function declaration
    {
        return n1-n2;
    }
    int multi (int n1,int n2)//function declaration
    {
        return n1*n2;
    }
    double div (double n1,double n2)//function declaration
    {
        return n1/n2;
    }
};
int main()
{
    int n1 ,n2;
    cout << "\n enter the value in n1 = ";
    cin >> n1;
    cout << "\n enter the value in n2 = ";
    cin >> n2;
    Calculator addition;
    cout << "\n the addition = "<< addition.add(n1,n2);
    Calculator subtrection;
    cout << "\n the subtrection = "<< subtrection.sub(n1,n2);
    Calculator multiplication;
    cout << "\n the multiplication = "<< multiplication.multi(n1,n2);
    Calculator division;
    cout << "\n the division = "<< division.div(n1,n2);
    return 0;
}