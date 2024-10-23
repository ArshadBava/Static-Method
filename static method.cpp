#include <iostream>

using namespace std;

class MathOperations {
public:
    static int square(int number) {
        return number * number;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = MathOperations::square(number);
    cout << "The square of " << number << " is: " << result << endl;

    return 0;
}

