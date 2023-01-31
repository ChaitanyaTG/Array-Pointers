//
//  AddingAllElementsOfAnArray.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 28/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int A[7] = {23,46,69,92,115,138,161};
    int n = 7, sum = 0;
    for (int i = 0; i < 7; i++) {
        sum+=A[i];
    }
    cout<<"Sum is "<<sum<<endl;
    
    return 0;
}

