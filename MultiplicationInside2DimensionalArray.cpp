//
//  MultiplicationInside2DimensionalArray.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 30/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int A[10][10], B[10][10], Mult[10][10], r1,c1,r2,c2, i, j, k;
    cout<<"Enter the rows and columns of the first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter the rows and columns of the second matrix: ";
    cin>>r2>>c2;
    
    if (c1 != r2) {
        cout<<"cant be multiplied ";
        return 0;
    }
    cout<<endl<<"Enter elements of matrix 1: "<<endl;
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            cout<<"Enter element A"<<i + 1<<j + 1<<" : ";
            cin>>A[i][j];
        }
    }
    cout<<endl<<"Enter elements of matrix 2: "<<endl;
    for (i = 0; i < r2; ++i) {
        for (j = 0; j < c2; ++j) {
            cout<<"Enter element B"<<i + 1<<j + 1<<" : ";
            cin>>B[i][j];
        }
    }
    for(i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            Mult[i][j] = 0;
            for (k = 0; k < c1; ++k) {
                Mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout<<endl<<"Output Matrix: "<<endl;
    
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            cout<<" "<<Mult[i][j];
            
            if (j == c2 - 1) {
                cout<<endl;
            }
        }
    }
    return 0;
}

