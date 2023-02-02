//
//  ReferenceSyntax.cpp
//  Pointers
//
//  Created by Chaitanya Gadkari on 31/01/23.
//


#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &y = x;
    
    
    //int b = 20;
   // &y = b; // once reference is assign you cannot assign it again
    cout<<x<<endl; //10
    y++; // 11
    x++; // 12
    cout<<x<<endl; // 12
    cout<<&x<<" "<<&y<<endl;  // address should be same
    
    return 0;
}
