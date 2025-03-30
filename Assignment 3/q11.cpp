#include <iostream>
using namespace std;
int main ()
{
    int i,j,row;
    cout << "\n entre the row number = ";
    cin >> row;
    for (i=0;i<=row;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
    return 0;
}