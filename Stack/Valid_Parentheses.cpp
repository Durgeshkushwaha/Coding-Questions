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
    string s;
    cout << "Enter the string\n";
    cin >> s;
    bool ans = isValid(s);
    ans ? cout << "The given parentheses is Valid\n" : cout << "The given parentheses is not valid\n";
    main();  // to run the function again for taking the next input
    return 0;
}