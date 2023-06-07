#include <iostream>
#include <unordered_map>
using namespace std;
bool strobogrammatic(string num) {
        unordered_map<char, char> um{{'0', '0'}, {'1', '1'}, {'6', '9'}, {'8', '8'}, {'9', '6'}};
        for (int l = 0, r = num.size() - 1; l <= r; l++, r--) {
            if (um.find(num[l]) == um.end() || um[num[l]] != num[r]) {
                return false;
            }
        }
        return true;
    }

int main()
{
    cout<<strobogrammatic("689");

    return 0;
}
