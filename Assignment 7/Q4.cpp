#include <iostream>
#include <algorithm>  
#include <string>  
using namespace std;

string reverseWords(string s) {
        for (int left = 0; left < s.length(); left++) {
            if (s[left] != ' ') {   
                int right = left;
                for (; right < s.length() && s[right] != ' '; right++) { } 
                reverse(s.begin() + left, s.begin() + right);
                left = right;
            }
        }
        
        return s;
    }
int main()
{
    
    cout<<reverseWords("Let's take LeetCode contest");

    return 0;
}