#include <iostream>
#include<stack>
using namespace std;

bool rotateString(string s, string goal) {
      
        return (s.size()== goal.size() and (s+s).find(goal)!=-1);
    }

int main()
{
    
    cout<<rotateString("abc","bda");

    return 0;
}