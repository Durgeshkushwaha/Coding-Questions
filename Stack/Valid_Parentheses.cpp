#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (auto i : s)
    {
        if (i == '(' || i == '{' || i == '[')
            st.push(i);
        else
        {
            if (st.empty() || (st.top() == '(' && i != ')') || (st.top() == '{' && i != '}') || (st.top() == '[' && i != ']'))
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string s = "()[]{}";

    bool ans = isValid(s);
     if(ans) cout <<true;
     else cout <<false;
    return 0;
}