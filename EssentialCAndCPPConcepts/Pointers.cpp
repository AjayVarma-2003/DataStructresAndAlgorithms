#include <iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

int main()
{
//     int a = 10;

//     int *p;
//     p = &a;

//     cout<<a<<endl;
//     cout<<p<<endl;  //also can be getted as &a
//     cout<<*p<<endl;
//     // printf("using pointer %d",*p)

    // int A[5] = {2, 4, 6, 8, 10};
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    // // p=A;  //p=A[0];
    // //p = (int *)malloc(5*sizeof(int));    //used in C for creating heap memory and accessing through pointer
    // p = new int [5];
    // p[0] = 10, p[1] = 11, p[2] = 12, p[3] = 13, p[4] = 14;     //Array inside heap 

    // for (int i = 0;i<5;i++)
    // {
    //     cout<<p[i]<<endl;
    // }

    // delete []p;  //as it is created dynamically we should delete that after use
    //             //means when we dynamically create memory then we should release that memory after using it
    // //free(p);  //in C program syntax

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    return 0;
}