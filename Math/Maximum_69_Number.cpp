#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Leetcode 1323. Maximum 69 Number
int maximum69Number(int num)
{
    string str = to_string(num);
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '6')
        {
            str[i] = '9';
            break;
        }
    }
    num = stoi(str);
    return num;
}

int main()
{
    int n = 9669;
    int ans = maximum69Number(n);
    cout << "The answer will be " << ans;
    return 0;
}