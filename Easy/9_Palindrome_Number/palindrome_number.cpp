//Given an integer x, return true if x is palindrome integer.
//An integer is a palindrome when it reads the same backward as forward.
//For example, 121 is a palindrome while 123 is not.

class Solution {
public:
    bool isPalindrome(int x) {
        if((x < 0) || (((x % 10) == 0) && (x != 0))) {
            return false;
        }

        int temp = x;
        long revertedNumber = 0;
        do
        {
            revertedNumber = (revertedNumber * 10) + (temp % 10);
            temp /= 10;
        }while(temp != 0);
     
        return x == revertedNumber;
    }
};
