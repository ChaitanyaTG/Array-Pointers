//
//  DeclarationOfAnArray.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 28/01/23.
//



#include <iostream>
using namespace std;

int main() {
    int i;
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    for (i=0; i < 10;i++)
        cout<<A[i]<<endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int i, j, k;
    
    int A[5] = {1, 2, 3, 4, 5};
    float B[5] = { 1.1, 2.4, 3.6, 4.8, 6.5};
    char C[5] = { 'A', 'B', 'C', 'D', 'E'};
    
    for (i=0; i<5; i++)
        cout<<A[i]<<endl;
    for(j=0; j<5; j++)
        cout<<B[j]<<endl;
    for (k=0; k<5; k++)
        cout<<C[k]<<endl;
    
    return 0;
}

// Declare an array
#include <iostream>
using namespace std;

int main() {
    int A[6] = {2,4,6,8,10,14};
    for (int i = 0; i < 6; i++) {
        cout<<A[i]<<endl;
    }
    return 0;
}


// if you declare an array of 4 but only has 2 values. so, the other two will have 0s in it.
#include <iostream>
using namespace std;

int main() {
    int A[4] = {2,3};
    for (int i = 0; i < 4; i++) {
        cout<<A[i]<<endl;
    }
    return 0;
}

// if an array of 5 but it only has one value ie 0. the remaining four values also become 0.
#include <iostream>
using namespace std;

int main() {
    int A[5] = {0};
    for (int i = 0; i < 5; i++) {
        cout<<A[i]<<endl;
    }
    return 0;
}

// For Each Loop
#include <iostream>
using namespace std;

int main() {
    int A[4] = {1,5,6,7};
    for (int x:A){
        cout<<x<<endl;
    }
    return 0;
}

// For Each Loop For a Float
#include <iostream>
using namespace std;

int main() {
    float A[5] = {2.5f,3.4f,4.9f,6,8};
    for(float x:A) {
        cout<<x<<endl;
    }
    return 0;
}

// For each Loop using Auto
#include <iostream>
using namespace std;

int main() {
    float A[7] = {2.3f,4.1f,4.9f,5.7f,7,89,123};
    for (auto x:A) {
        cout<<x<<endl;
    }
    return 0;
}

// For each loop, using auto for char data type. but to get every value, you shall use int over auto
#include <iostream>
using namespace std;

int main() {
    char A[5] = {'A', 66, 'C', 68};
    // use int over auto to get proper output
    for (int x:A) {
        cout<<x<<endl;
    }
    return 0;
}
