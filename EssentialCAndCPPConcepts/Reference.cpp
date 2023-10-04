#include <iostream>
using namespace std;

int main()
{
    int a =10;
    int &r = a;     //refrence must be initialized otherwise gives error

    cout<<a;
    cout<<r;
    r++;
    cout<<a;

    return 0;
}