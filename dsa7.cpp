#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s = "({[]})";

    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                cout << "false";
                return 0;
            }

            if ((c == ')' && st.top() != '(') ||
                (c == '}' && st.top() != '{') ||
                (c == ']' && st.top() != '[')) {
                cout << "false";
                return 0;
            }

            st.pop();
        }
    }

    if (st.empty())
        cout << "true";
    else
        cout << "false";

        
    return 0;
}