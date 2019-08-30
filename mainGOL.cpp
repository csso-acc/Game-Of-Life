// C++ Program to print the elements of a
// Two-Dimensional array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // an array with 3 rows and 2 columns.
    vector<vector<int>> x = {{0, 1},    // if you don't use vectors, then the dimensions have to be hard-coded.
                             {2, 3}, 
                             {4, 5}};

    int temp_row = 0;
    // output each array element's value
    for (auto & row : x)
    {
        int temp_col = 0;
        for (int & col : row)
        {
            cout << "Element at x[" << temp_row
                 << "][" << temp_col << "]: ";
            cout << col << endl;
            temp_col++;
        }
        temp_row++;
    }

    return 0;
}
