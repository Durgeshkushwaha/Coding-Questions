#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> maxOfSubarrays(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> ans;
    priority_queue<pair<int, int>> q;

    for (int i = 0; i < k; i++)
    {
        q.push({arr[i], i});
    }
    ans.push_back(q.top().first);

    for (int i = k; i < n; i++)
    {
        q.push({arr[i], i});

        while (q.top().second <= i - k)
            q.pop();

        ans.push_back(q.top().first);
    }
    return ans;
}
int main()
{
    vector<int> v{8, 5, 10, 7, 9, 4, 15, 12};
    int k = 4;
    vector<int> ans = maxOfSubarrays(v, k);
    cout << "the required array will be..\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}