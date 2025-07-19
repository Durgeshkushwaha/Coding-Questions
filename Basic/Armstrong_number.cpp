#include <iostream>
using namespace std;

bool armstrongNumber(int n)
{
    int sum = 0, m = n;
    for (int i = 1; i <= n; i++)
    {
        int x = m % 10;
        m /= 10;
        sum += x * x * x;
    }
    return n == sum;
}
int main()
{
    int n;
    cout << "enter the value of n\n";
    armstrongNumber(n);
    return 0;
}