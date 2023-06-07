#include <iostream>
#include<stack>
using namespace std;

void reverse(string &s,int l,int r){
        for(size_t i=l,j=r;i<j;i++,j--){
            swap(s[i],s[j]);
        }
    }
    string reverseStr(string s, int k) {
      bool flag=true;
        for(int i=0;i<s.size();i+=k) {
           if(flag) {
               if(i+k-1 >= s.size()) reverse(s,i,s.size()-1);
               else reverse(s,i,i+k-1);
               flag=false;
           }
           else flag=true;
        }
        return s;  
    }
int main()
{
    
    cout<<reverseStr("abcdefghi",2);

    return 0;
}