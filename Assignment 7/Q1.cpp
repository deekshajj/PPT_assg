#include <iostream>
#include <unordered_map>
using namespace std;
bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m1,m2;
        for(int i=0;i<s.size();i++)
        {
            if(m1[s[i]] && m1[s[i]]!=t[i])
                return false;
            if(m2[t[i]] && m2[t[i]]!=s[i]) 
                return false;
            m1[s[i]]=t[i];
            m2[t[i]]=s[i];

        }
        return true;
}

int main()
{
    cout<<isIsomorphic("egg","add");

    return 0;
}
