//
// Created by vaishnav on 08-01-2024.
//

#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main()
{
    int a,b;
    cout<<"\nEnter the values of a and b:- ";
    cin>>a>>b;
    cout<<"\nValues before swapping of a:- "<<a<<" and b:- "<<b;
    swap(&a, &b);
    cout<<"\nValues after swapping a:- "<<a<<" and b:- "<<b;
    return 0;
}
