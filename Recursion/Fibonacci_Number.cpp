#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fib(int n)          // 509. Fibonacci Number
{
    if (n < 2)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 6;
    int ans = fib(n);
    cout << "the nth fibonacci number are :" << ans;
    return 0;
}