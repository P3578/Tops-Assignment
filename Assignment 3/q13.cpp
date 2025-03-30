//factorila 
#include <iostream>
using namespace std;
int fact (int n);//recurcive function definition
int fact (int n)//recurcive function declaration
{
    if (n == 0 || n==1)
    {
        return 1;
    }
    else 
    {
        return (n *fact(n-1));//recursion function
    }
}
int main ()
{
    int n1;
    cout << "\n enter the number in n1 = ";
    cin >> n1;
    cout << "\n the factorial of number = "<<fact(n1);//recuson function calling
    return 0;
}