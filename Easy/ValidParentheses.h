#pragma once

#include <string>
#include <stack>

using std::stack;
using std::string;

class Solution {
public:

    bool isValid(string s) {

        stack <char> stack;

        char current;

        for (auto i = 0; i < s.size(); i++)
        {
            current = s[i];

            if ((current == '{') || (current == '[') || (current == '('))
            {
                stack.push(current);
            }
            else
            {
                if (stack.empty())
                {
                    return false;
                }

                if ((stack.top() == '(' && current == ')') ||
                    (stack.top() == '[' && current == ']') ||
                    (stack.top() == '{' && current == '}')
                    )
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return stack.empty();
    }


};