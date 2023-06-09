#include <iostream>

using namespace std;
int Nsum(int n)
{
    if(n==1)    
    return 1;
    return Nsum(n-1)+n;
}
int main()
{
    cout<<Nsum(5);
    return 0;
}
