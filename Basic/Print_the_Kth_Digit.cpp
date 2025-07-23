#include <iostream>
using namespace std;

int kthDigit(int a, int b, int k)
{
    long long num = 1;
    for (int i = 1; i <= b; i++)
    {
        num *= a;
    }
    int digit = 0;
    while (k--)
    {
        digit = num % 10;
        num /= 10;
    }
    return digit;
}

int main()
{
    int a, b, k;
    cout << "enter the value of a, b and k\n";
    cin >> a >> b >> k;
    int kth = kthDigit(a, b, k);
    cout << kth;
    return 0;
}
