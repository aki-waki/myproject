#include <iostream>
#include <string>
#include<math.h>
#include<iomanip>

using namespace std;



void task1() {
    float x, y, a;
    cout << "Task 1. Input x and y: ";
    cin >> x >> y;
    
    a = (sqrt(abs(x-1)) - cbrt(abs(y))) / ( 1 + pow(x, 2)/2 + pow(y, 2)/4 );
    cout << "a  = "<< round (a * 10000) /10000 << endl;
}
void task2() {
    double x1, y1, z1, x2, y2, z2, distance;
    cout << "Task 2. Input First Point Coordinates: ";
    cin >> x1 >> y1 >> z1;
    cout << "Input Second Point Coordinates: ";
    cin >> x2 >> y2 >> z2;
    distance = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2) + pow(z1-z2, 2));
    cout << "Distance = " << distance  << endl;
}

void task3() {
    double income, tax;
    cout << "Task 3. Input Income: ";
    cin >> income;
    if (income < 0) {
        cout << "Incorrect number" << endl;
        return;
    }
    else if (income <= 5000) {
        tax = 0;
    }
    else if (income <= 10000) {
        tax = income * 0.03;
    }
    else if (income <= 20000) {
        tax = income * 0.055;
    }
    else if (income <= 40000) {
        tax = income * 0.108;
    }
    else {
        tax = income * 0.237;
    }

    cout << "Tax is " << tax << endl;
}

void task4() {
    int number;
    bool isPalindrome = true;
    cout << "Task 4. Input number: ";
    cin >> number;
    string num = to_string(number);
    int digitCount = num.size();
    for (int i = 0; i < digitCount/2; i++) {
        if (num[i] != num[digitCount-i-1]) isPalindrome = false;
    }
     cout << "The number " << number << (isPalindrome ? " is" : " is not") << " palindrome" << endl;
}

void task5() {
    int evenCount = 0, oddCount = 0, curNumber;
    cout << "Task 5. Input numbers till 0: ";
    cin >> curNumber;
    while (curNumber != 0) {
        (curNumber % 2 == 0) ? evenCount++ : oddCount++;
        cin >> curNumber;
    }
    cout << "Amount of evens: " << evenCount << endl;
    cout << "Amount of odds: " << oddCount << endl;
}


int main()
{
    int taskNumber;
    while (true) {
        cout << "Input task number (1-5 or end of program): ";
        cin >> taskNumber;
        switch(taskNumber) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            case 5:
                task5();
                break;
            default:
                cout << "End of Program" << endl;
                return 0;
        }

    }
    return 0;
}

