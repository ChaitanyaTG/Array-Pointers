//
//  BinarySearchOfAnArray.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 28/01/23.
//


#include <iostream>
using namespace std;

int main() {
    int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int l = 0, h = 9, mid, key;
    cout<<"Enter a Key ";
    cin>>key;
    
    while (l <= h) {
        mid = (l+h)/2;
        if (key == A[mid]) {
            cout<<"Key Found at "<<mid<<endl;
            return 0;
        }
        else if (key < A[mid]) {
            h = mid - l;
        }
        else {
            l = mid + l;
        }
    }
    cout<<"Key not Found :/"<<endl;
    
    return 0;
}
