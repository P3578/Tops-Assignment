//This is the answer
#include <iostream>
using namespace std;
class Person
{
    public :
        void display ()
        {
            cout << "\n hello from Person class";
        }
};
class Student : public Person
{

};
class Teacher : public Person
{

};
int main ()
{
    Person p;
    p.display();
    Student s;
    s.display();
    Teacher t;
    t.display();
    return 0;
}