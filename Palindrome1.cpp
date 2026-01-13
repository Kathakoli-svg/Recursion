#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int left, int right) {
    // Base case: pointers crossed or met
    if (left >= right)
        return true;

    // If characters don't match
    if (s[left] != s[right])
        return false;

    // Recursive call
    return isPalindrome(s, left + 1, right - 1);
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s, 0, s.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
