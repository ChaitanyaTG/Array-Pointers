//
//  SubtractionOf2DimensionalArray.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 29/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int A [2][3] = {{5,8,9}, {9,7,6}};
    int B [2][3] = {{2,1,3}, {3,1,2}};
    int C [2][3];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<C[i][j]<" ";
        }
        cout<<endl;
    }
    return 0;
}
