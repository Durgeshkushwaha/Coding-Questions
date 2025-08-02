#include <iostream>
#include <vector>
using namespace std;

int maximumSumSubarray(vector<int> &arr, int k)
{
    int n = arr.size();
    int windowsum = 0;
    for (int i = 0; i < k; i++)
    {
        windowsum += arr[i];
    }
    int maxsum = windowsum;
    for (int i = k; i < n; i++)
    {
        windowsum = windowsum + arr[i] - arr[i - k];
        maxsum = max(maxsum, windowsum);
    }
    return maxsum;
}
int main()
{
    vector<int> arr = {100, -200, 900, -300, 400};
    int k = 2;
    cout << "maximum sum is :" << maximumSumSubarray(arr, k);
    return 0;
}