#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    if (n <= 2)
        return 0;

    vector<bool> isPrime(n, true);   // Sieve of Eratosthenes algorithm
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
            count++;
    }

    return count;
};
int main()
{
    int n = 10;
    int ans = countPrimes(n);
    cout << "the number of primes are -> " << ans;
    return 0;
}