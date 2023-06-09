#include <iostream>
#include <array>
using namespace std;
int armax(int a[],int max,int n)
{
    if(n==0)    
    return max;
    if(max<=a[n])
    return armax(a,a[n],n-1);
    else
        return armax(a,max,n-1);
}
int main()
{
    int a[] = {1, 4, 13, -5, -4, 8, 6};
    int n= sizeof(a) / sizeof(int);
    cout<<armax(a,a[n-1],n-1);
    
    int arr[] = {1, 4, 45, 6, 10, -8};
    int m= sizeof(arr) / sizeof(int);
    cout<<armax(arr,arr[m-1],m-1);
    return 0;
}
