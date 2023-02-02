//
//  PointerArithmetic.cpp
//  Pointers
//
//  Created by Chaitanya Gadkari on 30/01/23.
//


// for incrementing and decrementing the pointer
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    
    
    return 0;
}


// for adding 2 to the integer value (4 bytes * 2=8)
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    cout<<p<<endl;
    cout<<p + 2<<endl;
    
    return 0;
}


// to get address when added 2 to it
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    cout<<*p<<endl;
    cout<<*(p + 2)<<endl;
    
    return 0;
}

// for loop pointer
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    for (int i = 0; i < 5; i++) {
        cout<<A[i]<<endl;
    }
    return 0;
}

// same result as above
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    for (int i = 0; i < 5; i++) {
        cout<<i[A]<<endl;
    }
    return 0;
}

// same
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    for (int i = 0; i < 5; i++) {
        cout<<*(A+i)<<endl;
    }
    return 0;
}

// * gives data and by not writing it, we will get addresses
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    for (int i = 0; i < 5; i++) {
        cout<<A+i<<endl;
    }
    return 0;
}

// same as above
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    for (int i = 0; i < 5; i++) {
        cout<<p+i<<endl;
    }
    return 0;
}

// using * to get array name
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    for (int i = 0; i < 5; i++) {
        cout<<*(p+i)<<endl;
    }
    return 0;
}

// instead of writing A[i], p[i] also works the same
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    for (int i = 0; i < 5; i++) {
        cout<<p[i]<<endl;
    }
    return 0;
}

// use p to get address and * to get array name
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    
    for (int i = 0; i < 5; i++) {
        cout<<(p+i)<<endl;
    }
    return 0;
}

// to change the place of pointer
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A;
    cout<<p<<endl;
    
    for (int i = 0; i < 5; i++) {
        cout<<*p<<endl;
        // * for names. omit * to get memory addresses
        p++;
    }
    cout<<p<<endl;
    
    return 0;
}

// to get distance between two pointers
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A, *q = &A[4];
    
    cout<<q-p<<endl;
    
    return 0;
}

// second pointer is far away and first pointer is in the beginning. - sign give which element comes first

#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A, *q = &A[4];
    
    cout<<p-q<<endl;
    
    return 0;
}

