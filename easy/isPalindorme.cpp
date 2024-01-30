#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int revertedNumber = 0;
    while (x > revertedNumber)
    {
        int digit = x % 10;
        revertedNumber = revertedNumber * 10 + digit;
        x /= 10;
    }

    return x == revertedNumber || x == revertedNumber / 10;
}

int main()
{
    cout << boolalpha;
    cout << "121: " << isPalindrome(121) << endl;
    cout << "-121: " << isPalindrome(-121) << endl;
    cout << "10: " << isPalindrome(10) << endl;

    return 0;
}
