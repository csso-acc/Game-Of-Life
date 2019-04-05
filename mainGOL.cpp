// C++ Program to print the elements of a
// Two-Dimensional array
#include<iostream>
using namespace std;

void printFunction(int )

int main()
{
    L = 20
    W = 20
    // an array with 3 rows and 2 columns.
    int x[W][L];

    // output each array element's value
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < L; j++) 
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }

    return 0;
}
