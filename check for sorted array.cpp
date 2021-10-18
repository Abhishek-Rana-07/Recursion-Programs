//check for sorted array
#include<iostream>
using namespace std;
bool sort(int a[],int n)
{
    if(n==1)
        return true;
    return (a[0]<a[1] && sort(a+1,n-1));
}
int main()
{
    int a[5]={1,2,3,6,9};
    cout<<sort(a,5)<<endl;
}
