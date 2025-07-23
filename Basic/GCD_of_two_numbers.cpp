#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int A = a, B = b;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "gcd of " << A << " and " << B << " are " << a;
    return a;
}
int main()
{
    int a, b;
    cout << "enter value of a and b\n";
    cin >> a >> b;
    gcd(a, b);
    return 0;
}
