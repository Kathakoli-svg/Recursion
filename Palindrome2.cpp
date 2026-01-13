#include <bits/stdc++.h>
using namespace std;

bool f(int i, string &s) {
    // Base case
    if (i >= s.size() / 2)
        return true;

    // If characters don't match
    if (s[i] != s[s.size() - i - 1])
        return false;

    // Recursive call
    return f(i + 1, s);
}

int main() {
    string s;
    cin >> s;
    if (f(0 , s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
