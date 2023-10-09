//
// Fizz Buzz implementation.
//
#include <iostream>
#include "FizzBuzz.h"
using namespace std;

void fizzBuzz(){

    for (int i = 1; i <= 100; i++)
        cout << i << ", ";

    cout << "\n";

    for (int i = 1; i <= 100; i++) {


        if (i % 3 == 0) {
            cout << "Fizz";
        }
        else {
            cout << i << ", ";
        }
    }
    cout << "\n";

    for (int i = 1; i <= 100; i++) {

        if (i % 5 == 0) {
            cout << "Buzz";
        }
        else {
            cout << i << ", ";
        }
    }
}

