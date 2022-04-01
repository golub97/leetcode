/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
*/

class Solution {
public:
    bool isValid(string x) {
        stack<char> s;
        char c;
        
        for(int i = 0; i<x.length();i++)
        {
            if(x[i] == '(' || x[i] == '{' || x[i] == '[')
            {
                s.push(x[i]);
                continue;
            }

            if (s.empty())
                return false;
                
            switch(x[i])
            {
                case ')':
                    c = s.top();
                    s.pop();
                    if (c != '(')
                        return false;
                    break;
                case '}':
                    c = s.top();
                    s.pop();
                    if (c != '{')
                        return false;
                    break;
                case ']':
                    c = s.top();
                    s.pop();
                    if (c != '[')
                        return false;
                    break;
            }
        }
            // Check Empty Stack
        return (s.empty());
    }
};
