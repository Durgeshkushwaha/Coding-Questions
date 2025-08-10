#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int l = strs[0].size();
    string res = "";
    bool flag = true;
    for (int i = 0; i < l; i++)
    {
        char ch = strs[0][i];
        for (int j = 1; j < strs.size(); j++)
        {
            if (ch == strs[j][i])
                continue;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
            break;
        else
            res += ch;
    }
    return res;
}
int main()
{
    vector<string> strs{"flower", "flow", "flight"};
    string ans = longestCommonPrefix(strs);
    cout << "the common prefix are -> " << ans;
    return 0;
}