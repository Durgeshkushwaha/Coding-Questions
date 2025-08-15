#include <iostream>
#include <string>
#include <vector>
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
    int n = 27;
    int res = isPowerOfThree(n);
    res ? cout << "The given number is power of 3" : cout<<"The given number is not power of 3";
    return 0;
}