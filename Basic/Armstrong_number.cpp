#include <iostream>
using namespace std;

bool armstrongNumber(int n)
{
    int sum = 0, m = n;
    for (int i = 1; i <= 3; i++)
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
    cin >> n;
    armstrongNumber(n) ? cout << "This is Armstrong Number" : cout << "This is not Armstrong Number";
    return 0;
}