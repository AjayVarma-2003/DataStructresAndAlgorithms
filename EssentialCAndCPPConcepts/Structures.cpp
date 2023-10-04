#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    int AreaOfRectangle;
    struct Rectangle r1;
    //struct Rectangle r1 = {10, 5};

    cout<<"Enter length of rectangle : "<<endl;
    cin>>r1.length;

    cout<<"Enter breadth of rectangle : "<<endl;
    cin>>r1.breadth;

    AreaOfRectangle = r1.breadth * r1.length;

    cout<<"Area of rectangle is : "<<AreaOfRectangle<<endl;

    return 0;
}