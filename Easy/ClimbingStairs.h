#pragma once

class Solution {
public:
	int climbStairs(const int& n) const {
		int counter = 0;
		return rec(1, 0, n, counter);
	}

	int rec(const int& pathCount, const int& num, const int& maximum, int& counter) const
	{
		if (counter == maximum) {
			return pathCount;
		}
		else {
			counter++;
			return rec(pathCount + num, pathCount, maximum, counter);
		}
	}
};