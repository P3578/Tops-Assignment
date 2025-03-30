#include <iostream>
using namespace std;
int main ()
{
    int a[100][100],b[100][100],result[100][100];
    int i,j,rawa,cola,rawb,colb;
    // for matrix a ;
    cout << "\n enter the raw of matrix a = ";
    cin >> rawa;
    cout << "\n enter the col of matrix a = ";
    cin >> cola;
    for (i=0;i<rawa;i++)
    {
        for (j=0;j<cola;j++)
        {
             cout << "\n enter the element of matrix a["<<i<<"]["<<j<<"] = ";
             cin >> a[i][j];
        }
    } 
    // for matrix b ;
    cout << "\n enter the raw of matrix b = ";
    cin >> rawb;
    cout << "\n enter the col of matrix b = ";
    cin >> colb;
    for (i=0;i<rawb;i++)
    {
        for (j=0;j<colb;j++)
        {
             cout << "\n enter the element of matrix b["<<i<<"]["<<j<<"] = ";
             cin >> b[i][j];
        }
    } 
   //print matrix a ;
   cout << "\n matrx a"<<endl;
   for (i=0;i<rawa;i++)
   {
        for (j=0;j<cola;j++)
        {
            cout << a[i][j] << " ";
        } 
        cout << endl;
   }
    //print matrix b ;
    cout << "\n matrx b"<<endl;
    for (i=0;i<rawb;i++)
    {
         for (j=0;j<colb;j++)
         {
             cout << b[i][j] << " ";
         } 
         cout << endl;
    }
    // sum of matrix a and matrix b ;
    if (rawa != rawb && cola != colb)
    {
        cout << "\n raw and col are not same.";
    }
    else
    {
        for (i=0;i<rawa;i++)
        {
            for (j=0;j<cola;j++)
            {
                result[i][j] = a[i][j] + b[i][j]; 
            }
        }
    }
    // print of result matrix
    cout << "\n result"<<endl;
    for (i=0;i<rawa;i++)
    {
        for (j=0;j<cola;j++)
        {
            cout << result[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}