#include <iostream>
using namespace std;

int add (int a, int b)
{
    int c;
    c = a+b;
    return c;
}

int main()
{
    int No1 = 10;
    int No2 = 15;
    int sum = 0;

    sum = add(No1, No2);

    cout<<"Sum of variables is : "<<sum<<endl;

    return 0;
}