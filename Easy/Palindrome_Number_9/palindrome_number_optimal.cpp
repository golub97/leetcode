class Solution {
public:
    bool isPalindrome(int x) {

    string temp = to_string(x);
    return temp == string(temp.rbegin(), temp.rend());
    }
};
