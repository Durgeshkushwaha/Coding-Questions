#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
#include <stack>
using namespace std;

int first_occ(vector<int> &nums, int target, int n)
{
    int l = 0, h = n - 1;

    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else if (nums[mid] > target)
        {
            h = mid - 1;
        }
        else
        {
            if (mid == 0 || nums[mid] != nums[mid - 1])
                return mid;
            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}
int last_occ(vector<int> &nums, int target, int n)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else if (nums[mid] > target)
        {
            h = mid - 1;
        }
        else
        {
            if (mid == n - 1 || nums[mid] != nums[mid + 1])
                return mid;
            else
            {
                l = mid + 1;
            }
        }
    }
    return -1;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> v;
    int first = first_occ(nums, target, n);
    int last = last_occ(nums, target, n);
    v.push_back(first);
    v.push_back(last);
    return v;
}

int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> ans = searchRange(arr, target);
    cout << "The fisrt position is " << ans[0] << " and Last position is " << ans[1];
    return 0;
}