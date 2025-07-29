#include <iostream>
using namespace std;

long long fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
long long nPr(int n, int r)
{
    long long numerator = fact(n);
    long long denominator = fact(n - r);
    long long ans = numerator / denominator;
    return ans;
}
int main()
{
    int n, r;
    cout << "enter the value of n and r\n";
    cin >> n >> r;
    int res = nPr(n, r);
    cout << "The permutation is " << res;
    return 0;
}