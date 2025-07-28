#include <iostream>
#include <vector>
using namespace std;

int gcd_oftwo_num(int a, int b)
{
    int A = a, B = b;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    // cout << "gcd of " << A << " and " << B << " are " << a;
    return a;
}
int gcd(int n,int arr[])
{
    // int n = arr.size();
    int res = arr[0]; // Initialize with the first element
    for (int i = 1; i < n; i++)
    {
        res = gcd_oftwo_num(res, arr[i]); // Calculate GCD with current element
        if (res == 1)
            return 1; // If GCD becomes 1, no need to proceed. then 1 is gcd.
    }
    return res;
}
int main()
{
    
    cout << "enter value of array\n";
    
    int v[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    int ans=gcd(5,v);
    cout<<"gcd of array is "<<ans;
    return 0;
}
