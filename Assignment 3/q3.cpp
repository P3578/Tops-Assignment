//oop method
#include <iostream>
using namespace std;
class Area
{
    private://access specifire
    int l,b;
    public://access specifire
    void set()
    {
        cout << "\n enter the length = ";
        cin >> l;
        cout << "\n enter teh width = ";
        cin >> b;
    }
    void get ()
    {
        int area = l*b;
        cout << "area of rectangle = "<<area;
    }
};
int main ()
{
    Area b;
    b.set();
    b.get();
    return 0;
}