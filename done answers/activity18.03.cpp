#include <iostream>
using namespace std;

int main() {
    int a, m;
    cout << "Input a number: ";
    cin >> a;
    
    m = a % 10; // last digit
    a = a / 10;
    
    while (a > 0) {
        if (a % 10 > m) {
            m = a % 10;
        }
        a = a / 10;
    }
    
    cout << "The largest digit is " << m << endl;
    
    return 0;
}
