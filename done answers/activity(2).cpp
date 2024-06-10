#include <iostream>
using namespace std;

int main() {
    int number = 0, sum = 0;
    do {
        cout << "Input a number: ";
        cin >> number;
        if (number > 0) {
            sum += number; // sum = sum + number;
        }
    } while (number != 0);
    
    cout << "\nThe sum is " << sum << endl;
    return 0;
}
