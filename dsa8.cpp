#include <iostream>
#include <string>
using namespace std;

string process(string s) {
    string result;

    for (char c : s) {
        if (c != '#') {
            result.push_back(c);
        }
        else if (!result.empty()) {
            result.pop_back();
        }
    }

    return result;
}

int main() {
    string s = "ab#c";
    string t = "ad#c";

    if (process(s) == process(t))
        cout << "true";
    else
        cout << "false";

    return 0;
}