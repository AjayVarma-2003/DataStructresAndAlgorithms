#include <iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

int main()
{
    // struct Rectangle r = {10, 5};
    // cout<<r.length<<endl;
    // cout<<r.breadth<<endl;

    // Rectangle *p = &r;
    // cout<<p->length<<endl;
    // cout<<p->breadth<<endl;

    Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    //p = new Rectangle;

    p->breadth = 10;
    p->length = 5;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;    

    return 0;
}