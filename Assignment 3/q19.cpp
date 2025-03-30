#include <iostream>
using namespace std;
class BankAccount
{
    private :
        int acno;
        double blance;
    public :
        void set (int n, double b)
        {
            acno = n;
            blance = b;
        }
        void diposite (double amount)
        {
            if (amount > 0)
            {
                blance = blance + amount; 
            }
        }
        void withdraw (double with)
        {
            if (blance > with && with > 0)
            {
                blance = blance - with;
            }
            else 
            {
                cout << "\n law blance.";
            }
        }
        void get ()
        {
            cout << "\n Account no = "<< acno;
            cout << "\n Blance = "<< blance;
        }
};
int main ()
{
    BankAccount a;
    a.set (123456,1000);
    a.diposite(10000);
    a.withdraw(2000);
    a.get();

    return 0;
}