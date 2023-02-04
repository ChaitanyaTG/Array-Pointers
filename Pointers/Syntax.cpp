//
//  Syntax.cpp
//  Pointers
//
//  Created by Chaitanya Gadkari on 30/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    
    
    return 0;
    
}

// to delete pointer & assign pointer
#include <iostream>
using namespace std;

int main() {
    int *p = new int [5];
    p[0] = 3;
    p[1] = 5;
    cout<<p[0]<<endl;
    
    delete []p;
    p = nullptr;
    
    
    return 0;
}

// to create an array of desired size
#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter the desired size ";
    cin>>size;
    int A [size];
    
    cout<<sizeof A<<endl;
    
    return 0;
}

// to create a pointer inside heap memory
#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter the desired size ";
    cin>>size;
    int *p = new int [size];
    
    // i can change the size midway to my liking unlike stack
    cout<<"Enter new size ";
    cin>>size;
    p = new int [size];
    
    return 0;
}

// better way to dynamically allocate memory
#include <iostream>
using namespace std;

int main() {
    int *p = new int [20];
    
    delete []p;
    // delete before creating new address for pointer to point at, to avoid memory leak problem
    p = new int [40];
    
    
    return 0;
}

