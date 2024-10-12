#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n < 0) {
        cout << "Enter a positive number: ";
        return -1; // Return an error code
    }

    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 2; i <= n; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return nextTerm;
}

int main() {
    int numTerms;

    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> numTerms;

    if (numTerms >= 0) {
       
        cout << "Fibonacci sequence: ";
        for (int i = 0; i <= numTerms; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid input. Please enter a positive number." << endl;
    }

    return 0;
}