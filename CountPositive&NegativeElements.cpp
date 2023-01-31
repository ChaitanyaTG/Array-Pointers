//
//  CountPositive&NegativeElements.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 28/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int A[8] = {12,-14,16,18,-19,24,-26,45};
    int pcount=0, ncount=0;
    
    for (int x : A) {
        if (x < 0) {
            ncount++;
        }
        else {
            pcount++;
        }
    }
    cout<<"The Positive & Negative Elements of an array are "<<pcount<<" & "<<ncount<<" respectively."<<endl;
    
    
    return 0;
}

