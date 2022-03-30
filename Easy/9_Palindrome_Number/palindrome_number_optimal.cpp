//Given an integer x, return true if x is palindrome integer.
//An integer is a palindrome when it reads the same backward as forward.
//For example, 121 is a palindrome while 123 is not.

class Solution {
public:
    bool isPalindrome(int x) {

    string temp = to_string(x);
    return temp == string(temp.rbegin(), temp.rend());
    }
};
