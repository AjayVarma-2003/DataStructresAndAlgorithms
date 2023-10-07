#include <iostream>
using namespace std;

//parameter passing method - call by address
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int num1 = 10, num2 = 20;

    swap(&num1, &num2);

    cout<<"First number is : "<<num1<<endl;
    cout<<"Second number is : "<<num2<<endl;

    return 0;
}

//parameter passing method - call by reference
// void swap (int &x, int &y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
// int main()
// {
//     int num1 = 10, num2 = 20;

//     swap(num1, num2);

//     cout<<"First number is : "<<num1<<endl;
//     cout<<"Second number is : "<<num2<<endl;

//     return 0;
// }

