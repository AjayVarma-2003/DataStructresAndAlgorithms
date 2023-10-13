#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// void fun (struct Rectangle r)
// {
//     r.length = 20;
//     cout<<"Length :"<<r.length<<endl<<"breadth : "<<r.breadth<<endl;
// }

void fun (struct Rectangle *p)
{
    p->length = 20;
    cout<<"Length :"<<p->length<<endl<<"breadth : "<<p->breadth<<endl;
}

int main()
{
    struct Rectangle r = {10,5};

    fun(&r);

    cout<<"Length is : "<<r.length<<endl;
    cout<<"Breadth is : "<<r.breadth<<endl;

    return 0;
}