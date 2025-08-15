#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPowerOfFour(int n)
{
    if (n == 0)
        return false;
    while (n % 4 == 0)
    {
        n /= 4;
    }
    return n == 1;
}

int main()
{
    int n = 27;
    int result = isPowerOfFour(n);
    result ? cout << "The given number is power of 4" : cout << "The given number is not power of 4";
    return 0;
}