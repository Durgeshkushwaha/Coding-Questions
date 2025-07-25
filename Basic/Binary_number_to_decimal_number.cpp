#include <iostream>
using namespace std;

int binaryToDecimal(string &b)
{
    int n = b.size();
    int base = 1; // base value=1, i.e 2^0
    int decimal = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (b[i] == '1')
            decimal += base;
        // decimal+=(b[i]-'0')*base;  //can be used, coz b is string, b[i]=>char
        base = base * 2;
    }
    return decimal;
}

int main()
{
    string n;
    cout << "enter the value of n\n";
    cin >> n;
    cout << "the decimal of " << n << " is " << binaryToDecimal(n);
    return 0;
}