#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> countDistinct(vector<int> &arr, int k)
{
    int n = arr.size();
    map<int, int> m;
    for (int i = 0; i < k; i++)
    {
        m[arr[i]]++;
    }
    vector<int> ans;
    ans.push_back(m.size());

    for (int i = k; i < n; i++)
    {
        m[arr[i]]++;
        m[arr[i - k]]--;
        if (m[arr[i - k]] == 0)
            m.erase(arr[i - k]); // if frequency of element is 0 , then remove it form map

        ans.push_back(m.size());
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;
    cout<<"Distinct element in every window\n";
    vector<int> res = countDistinct(arr, k);
    for (auto x : res)
    {
        cout << x << " ";
    }
    return 0;
}