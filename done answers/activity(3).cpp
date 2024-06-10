#include <iostream>
using namespace std;

int main() 
{
    float sum = 0, avg;
    int n = 10;
    for (int i = 1; i <= n; i++) 
    {
        cout << i << "\t";
        sum += i;
    
    }
    cout << "\nSum is: " << sum << endl;
    avg = sum / n;
    cout << "Average is: " << avg << endl;
    return 0;
}
