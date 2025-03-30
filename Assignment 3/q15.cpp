#include <iostream>
using namespace std;
int main ()
{
    int a[100],size,i;
    int sum = 0;
    cout << "\n enter the size of an array = ";
    cin >> size;
    for (i=0;i<size;i++)
    {
        cout << "\n enter the elements of an array a["<<i<<"] =  ";
        cin >> a[i];
    }
    cout << "\n array a =  ";
    for (i=0;i<size;i++)
    {
        cout << a[i] << " ";
    }
    // sum of an array;
    for (i=0;i<size;i++)
    {
        sum = sum + a[i];
    }
    cout << "\n the sum of an array a = "<<sum;
    //avarage of an array;
    cout << "\n the average of an array a =  "<<float(sum)/float(size);
    return 0;
}