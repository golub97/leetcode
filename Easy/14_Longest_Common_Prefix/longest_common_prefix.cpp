//Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string "".

class Solution {
public:
    string longestCommonPrefix(vector<string>& s)
    {
    for (auto j = 0; ; ++j)
        for (auto i = 0; i < s.size(); ++i)
            if (s[i].size() < j || (i != 0 && s[i][j] != s[i - 1][j])) 
                return s[i].substr(0, j);
    }
};
