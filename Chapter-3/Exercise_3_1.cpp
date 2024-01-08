//
// Created by vaishnav on 08-01-2024.
//
#include<iostream>
using namespace std;

// Function to swap the values of two integers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // Declare variables to store user input
    int a, b;

    // Prompt the user to input values for 'a' and 'b'
    cout << "Enter the values of a and b:- ";
    cin >> a >> b;

    // Display the original values before swapping
    cout << "\nValues before swapping of a:- " << a << " and b:- " << b;

    // Call the swap function to interchange the values
    swap(&a, &b);

    // Display the values after swapping
    cout << "\nValues after swapping a:- " << a << " and b:- " << b;

    // Return 0 to indicate successful program execution
    return 0;
}
