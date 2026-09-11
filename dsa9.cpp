#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }

    for (char c : s) {
        cout << c;
    }

    return 0;
}