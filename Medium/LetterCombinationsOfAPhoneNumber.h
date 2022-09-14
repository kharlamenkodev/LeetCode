#pragma once

#include <map>
#include <string>
#include <vector>

using std::string;
using std::map;
using std::vector;

class Solution {
public:

    map <char, string> map;

    void backtrack(string current, int digitIndex, string digits, vector <string>& result) {
        if (current.size() >= digits.size()) {
            result.push_back(current);
            return;
        }

        for (char& sym : map[digits[digitIndex]]) {
            backtrack(current + sym, digitIndex + 1, digits, result);
        }
    }

    vector<string> letterCombinations(const string& digits) {

        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";

        vector <string> result;
        if (digits.size() <= 0) {
            return result;
        }

        backtrack("", 0, digits, result);

        return result;
    }
};