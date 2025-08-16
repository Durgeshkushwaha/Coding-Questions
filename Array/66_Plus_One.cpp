#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();

    // Start from the end of the array
    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }

    // If we are here, all digits were 9 (e.g., 999 -> 1000)
    digits.insert(digits.begin(), 1);
    return digits;
}
int main()
{
    vector<int> arr = {1, 2, 3};  // output should be 123+1-> 124
    vector<int> ans = plusOne(arr);
    cout << "the resultant array are\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<",";
    }
    return 0;
}