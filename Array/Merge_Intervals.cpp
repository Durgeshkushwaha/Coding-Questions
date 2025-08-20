#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

//56. Merge Intervals Leetcode
vector<vector<int>> merge(vector<vector<int>> &intervals) //  MIK
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    int n = intervals.size();
    ans.push_back(intervals[0]);

    for (int i = 1; i < n; i++)
    {
        if (ans.back()[1] >= intervals[i][0])
        {
            ans.back()[0] = min(ans.back()[0], intervals[i][0]);
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
        else
            ans.push_back(intervals[i]);
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> merged = merge(arr);
    cout << "The merged intervals are : \n";
    for (int i = 0; i < merged.size(); i++)
    {
        cout << "{" << merged[i][0] << "," << merged[i][1] << "}" << ",";
    }
    return 0;
}