#include <iostream>
using namespace std;
int main ()
{
    string s;
    cout << "\n enter the string = ";
    cin >> s;
    cout << "\n orignal string = "<<s;
    int left = 0,flag;
    int right = s.size() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            flag = false;
            break;
        }
        left ++;
        right--;
    }
    if (flag)
    {
        cout <<"\n the string is palindrome.";
    }
    else 
    {
        cout << "\n the string is not palindrome.";
    }
    
    return 0;
}