#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter the size of array : ";
    cin>>n;

    int A[n];

    // int A[10] = {2, 4, 6, 8, 10, 12, 14};

    // cout<<sizeof(A)<<endl;
    // cout<<A[1]<<endl;

    // printf("%d \n",A[2]);

    // for (int x:A)
    // {
    //     cout<<x<<endl;
    // }

    for (int i = 0; i<n; i++)
    {
        cout<<A[i]<<endl;
    }

    return 0;
}