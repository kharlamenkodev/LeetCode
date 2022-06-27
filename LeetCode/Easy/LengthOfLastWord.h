#include <string>

using std::string;

class LengthOfLastWord
{
public:

    int implementation(const string& s) const {

        auto it = s.crbegin() ;
        bool finded = false;
        uint32_t count = 0;

        while (it != s.crend()){
            if (finded){
                if (*it == ' '){
                    break;
                }
                else{
                    count++;
                }
            }
            else{
                if (*it != ' '){
                    count++;
                    finded = true;
                }
            }
            it++;
        }

        return count;
    }
};