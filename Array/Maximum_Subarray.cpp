#include <iostream>
#include <string>
#include <vector>
#include <climits> // to INT_MIN
using namespace std;

int maxSubArray(vector<int> &nums) // 53. Maximum Subarray, Leetcode
{
    int n = nums.size();
    int sum = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        ans = max(ans, sum);
        if (sum < 0)
            sum = 0;
    }
    return ans;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = maxSubArray(arr);
    cout << "The largest sum are : " << ans;
    return 0;
}