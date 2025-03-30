#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    srand(time(0));//for generat new sn number;
    int secretnumber;
    // To generate a secret number betwwen 1 to 100;
    secretnumber = (rand() % 100) -  1;

    int guess,i;
    int attemps = 0;
    
    cout << "\n you have try to guess which number I guess."<<endl;

    for (i=1;i<=10;i++)
    // you have 10 attemps to find the number;
    {
        attemps ++;
        cout <<"Attempt "<<i<<" : Enter the number : ";
        cin >> guess;
        
        if (guess < secretnumber)
        {
            cout << "Too low! Try again."<<endl;
        }
        else if (guess > secretnumber)
        {
            cout << "Too high! Try again."<<endl;
        }
        else
        {
            cout << "Congratulation! You win."<<endl;
            break;
        }
    }
    if (guess)
    {
        cout << "\n Sorry! better luck next time.";
        cout <<"\n you have run out of attempts.";
    }
    return 0;
}