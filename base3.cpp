#include <iostream>
using namespace std;

bool isPowerOfThree(int n)
{
    if (n <= 0)
        return false;
    while (n % 3 == 0)
    {
        n /= 3;
    }
    return n == 1;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isPowerOfThree(num) ? "Yes" : "No") << endl;
    return 0;
}