#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> firstNegInt(vector<int> &arr, int k)
{
    int n = arr.size();
    deque<int> dq;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
            dq.push_back(i); // store index of -ve numbers
    }

    for (int i = k; i < n; i++)
    {

        if (!dq.empty())
        {
            ans.push_back(arr[dq.front()]);
        }
        else
        {
            ans.push_back(0);
        }

        if (arr[i] < 0)
            dq.push_back(i);

        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front(); // remove index which are out of window
    }

    if (!dq.empty()) // For the last window, process it separately
    {
        ans.push_back(arr[dq.front()]);
    }
    else
        ans.push_back(0);
    return ans;
}
int main()
{
    vector<int> v{12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    vector<int> ans = firstNegInt(v, k);
    cout << "the required array will be..\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}