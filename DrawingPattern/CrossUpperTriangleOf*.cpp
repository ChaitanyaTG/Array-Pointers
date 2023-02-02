//
//  CrossUpperTriangleOf*.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 29/01/23.
//

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j<= 5-i+1; j++ ) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
