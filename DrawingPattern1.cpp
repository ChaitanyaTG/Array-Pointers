//
//  DrawingPattern1.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 29/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int count = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
