#include <iostream>

using namespace std;
int calc(int n,int p)
{
    if(p==0)    
    return 1;
    return calc(n,p-1)*n;
}
int main()
{
    cout<<calc(5,3);
    cout<<"\n"<<calc(2,5);
    return 0;
}
