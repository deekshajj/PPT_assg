#include <iostream>
#include<stack>
using namespace std;

bool backspaceCompare(string s, string t) {
        stack<int> st1,st2;
        for(auto it:s)
        {
            if(it!='#') 
            {st1.push(it);
            continue;
            }
            if(!st1.empty()) st1.pop();
        }
        for(auto it:t)
        {
            if(it!='#') 
            {st2.push(it);
            continue;
            }
            if(!st2.empty()) st2.pop();
        }
        while(!st1.empty() && !st2.empty())
        {
            if(st1.top()!=st2.top())
                return false;
            st1.pop();st2.pop();
        }
        if(!st1.empty() || !st2.empty())
        {
            return false;
        }
        return true;
    }

int main()
{
    
    cout<<backspaceCompare("ab#c","ad#c");

    return 0;
}