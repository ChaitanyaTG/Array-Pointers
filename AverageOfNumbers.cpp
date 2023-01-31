//
//  AverageOfNumbers.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 29/01/23.
//


#include <iostream>
using namespace std;

int main() {
    int n, i;
    float num[100], sum = 0.0, average;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    for (i = 0; i < n; i++) {
        cout<<i + 1<<".Quantity number: ";
        cin>>num[i];
        sum += num[i];
        
    }
    average = sum / n;
    cout<<"The Average of the above quantities is "<<average<<endl;
    
    return 0;
}
