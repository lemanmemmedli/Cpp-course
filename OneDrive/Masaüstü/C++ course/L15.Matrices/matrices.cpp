#include <iostream>

using namespace std;


/*
    A multi-dimensional array can be termed as an array of arrays that stores homogeneous data in tabular form. 
    Data in multidimensional arrays is generally stored in row-major order in the memory.

    The general form of declaring N-dimensional arrays is shown below.

    data_type array_name[size1][size2]....[sizeN];

    We can declare a two-dimensional integer array say ‘x’ with 10 rows and 20 columns as:

    int x[10][20];

    Source: https://www.geeksforgeeks.org/multidimensional-arrays-in-c/
    Source: https://www.tutorialspoint.com/cplusplus/cpp_multi_dimensional_arrays.htm
*/


int main() {

    int x[3][4] = {
        {0, 1, 2, 3}, 
        {4, 5, 6, 7}, 
        {8, 9, 10, 11}
    };

    int y[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

    int z[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // Print two dimensional array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;


    // Initialization of 3D Array using Initializer List
    int matrix_1[2][3][4] = { 
        { 
            {0, 1, 2, 3}, 
            {4, 5, 6, 7}, 
            {8, 9, 10, 11} 
        },
        { 
            {12, 13, 14, 15}, 
            {16, 17, 18, 19}, 
            {20, 21, 22, 23} 
        }
    };

    int matrix_2[2][3][4] = { 
        { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} },
        { {12, 13, 14, 15}, {16, 17, 18, 19}, {20, 21, 22, 23} }
    };

    int matrix_3[2][3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};


    // Print 3 dimensional array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << matrix_1[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }



}