//
//  CrossLowerTriangleOf*.cpp
//  Arrays
//
//  Created by Chaitanya Gadkari on 29/01/23.
//

#include<iostream>
using namespace std;

void Draw(int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j>=n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
