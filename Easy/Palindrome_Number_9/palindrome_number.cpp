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
