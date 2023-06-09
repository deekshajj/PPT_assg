#include <iostream>
#include <array>
using namespace std;
int AP(int a,int d,int n)
{
    if(n==1)
        return a;
    return AP(a+d,d,n-1);
}
int main()
{
    int a = 2 , d = 1, N = 5;
    cout<<AP(a,d,N)<<endl;
    cout<<AP(5,2,10)<<endl;

    return 0;
}
