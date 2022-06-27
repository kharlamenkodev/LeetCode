#pragma once

class ClimbingStairs {

public:
	int implementation(const int& steps) const {
		int counter = 0;
		return pathCount(1, 0, steps, counter);
	}

	int pathCount(const int& initial, const int& num, const int& maximum, int& counter) const
	{
		if (counter == maximum){
			return initial;
		}
		else {
			counter++;
			return pathCount(initial + num, initial, maximum, counter);
		}
	}
};
