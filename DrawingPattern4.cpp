//
//  DrawingPattern4.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 29/01/23.
//


#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ( i + j > 5-1) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
