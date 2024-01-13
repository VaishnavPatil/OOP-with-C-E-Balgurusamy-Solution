//
// Created by vaishnav on 13-01-2024.
//

/*
        Write a program to evaluate following investment equation V = P(1+r)n and print the tables which would give the value of V for various combination of the  following values of P, r, and n:
 P: 1000, 2000, 3000, ........, 10000
r: 0.10, 0.12, 0.13, ........, 0.20
n: 1, 2, 3, ........, 10

Hint:- P is the principal amount and v is the Value of money at the end of n years. This equation can be recursively written as
V = P(1+r)
P = V
 * /

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
    // Set precision for output
    cout << fixed << setprecision(2);

    // Loop for various values of P
    for (float P = 1000; P <= 10000; P += 1000) {
        // Loop for various values of r
        for (float r = 0.10; r <= 0.20; r += 0.01) {
            // Loop for various values of n
            for (int n = 1; n <= 10; ++n) {
                // Calculate V using the investment equation
                float V = P * pow(1 + r, n);

                // Print the values of P, r, n, and the corresponding V
                cout << "P = " << P << ", r = " << r << ", n = " << n << ", V = " << V << endl;
            }
        }
    }

    return 0;
}
