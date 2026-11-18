#include <iostream>

using namespace std;

// Helper function using bitwise logic to check parity
bool isEvenNumber(int n) {
    return (n & 1) == 0;
}

int main() {
    int inputVal;

    cout << "Input a value: ";
    cin >> inputVal;

    if (isEvenNumber(inputVal)) {
        cout << inputVal << " is Even\n";
    } else {
        cout << inputVal << " is Odd\n";
    }

    return 0;
}
