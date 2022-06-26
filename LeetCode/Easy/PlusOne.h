#include <vector>
#include <string>

using std::vector;

class PlusOne
{
public:

	vector <int> implementation(vector <int>& digits) {

		auto it = digits.rbegin();
		(*it)++;

		while (it != digits.rend()){
			if (*it == 10) {
				*it = 0;
				it++;
				if (it == digits.rend()){
					digits.insert(digits.cbegin(), 1);
					break;
				}
				(*it)++;
			}
			else {
				break;
			}
		}

		return digits;
	}
};