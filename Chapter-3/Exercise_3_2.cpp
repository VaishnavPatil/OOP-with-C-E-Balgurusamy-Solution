//
// Created by vaishnav on 12-01-2024.
//

#include<iostream>
using namespace std;
int *createVector(int size)
{
    int *vector = new int(size);
    return vector;
}
int main()
{
    int size;
    cout<<"\nEnter the size of vector:- ";
    cin>>size;
    int *myVector = createVector(size);
    delete[] myVector;
    return 0;
}
