#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number till which you want the sequence: ";
    cin >> n;

    int t1 = 0, t2 = 1, nextTerm = 0;
  
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    cout << "Fibonacci Series: ";

   
    cout << t1 << ", " << t2 << ", ";

  
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }

    cout << endl;
    return 0;
}