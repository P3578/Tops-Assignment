#include <iostream>
using namespace std;
int main ()
{
    int mark;
    cout << "\n enter the marks of students = ";
    cin >> mark;
    if (mark>90)
    {
        cout << "\n grade = A";
    }
    else if (mark > 75 && mark < 90)
    {
        cout << "\n grade = B";
    }
    else if (mark > 60 && mark < 75)
    {
        cout << "\n grade = C";
    }
    else if (mark >=35 && mark < 60)
    {
        cout << "\n grade = D";
    }
    else 
    {
        cout << "\n grade = F";
    }
    return 0;
}