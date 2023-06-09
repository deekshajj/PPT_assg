#include <iostream>
#include<array>
using namespace std;
int arrprod(int a[],int n)
{
    if(n==0)
    return a[n];
    return arrprod(a,n-1)*a[n];
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n=sizeof(arr) / sizeof(int);
    cout<<arrprod(arr,n-1)<<endl;
    int a[] = {1, 6, 3};
    int m=sizeof(a) / sizeof(int);
    cout<<arrprod(a,m-1);
    return 0;
}
