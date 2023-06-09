#include <iostream>

using namespace std;
/*bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    for(int i=n;i>1;i=i/2)
    {
        if(i%2==1)  return false;
    }
    return true;
}*/
void isPowerOfTwo(int n)
{
    if(n==1)    
    {cout<< 1;
        return;
    }
    if(n%2==1)  cout<< 0;
    else isPowerOfTwo(n/2);
}
int main()
{
    isPowerOfTwo(15);

    return 0;
}
