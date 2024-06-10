// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <ctime>

// using namespace std;

// // Constants
// const int MAX_SIZE = 100;

// // Task function declarations
// void convertDecimalToBinary();
// void processArraySets();
// void removeItemsLessThanAverage();
// void outputEvenValues();
// void matrixMultiplication();
// void sortArrayRows();

// int main() {
//     int choice;
//     do {
//         cout << "\nMENU:\n"
//              << "1. Decimal to Binary Conversion\n"
//              << "2. Process Array Sets\n"
//              << "3. Remove Items Less Than Average and Sort\n"
//              << "4. Output Even Values and Sum of First Items\n"
//              << "5. Matrix Multiplication\n"
//              << "6. Sort Array Rows\n"
//              << "7. Exit\n"
//              << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: convertDecimalToBinary(); break;
//             case 2: processArraySets(); break;
//             case 3: removeItemsLessThanAverage(); break;
//             case 4: outputEvenValues(); break;
//             case 5: matrixMultiplication(); break;
//             case 6: sortArrayRows(); break;
//             case 7: cout << "Exiting program." << endl; break;
//             default: cout << "Invalid choice. Please try again." << endl;
//         }
//     } while (choice != 7);

//     return 0;
// }

// void convertDecimalToBinary() {
//     int decimal;
//     cout << "Enter a decimal number: ";
//     cin >> decimal;

//     int binary[MAX_SIZE], index = 0;
//     while (decimal > 0) {
//         binary[index++] = decimal % 2;
//         decimal /= 2;
//     }

//     cout << "Binary representation: ";
//     for (int i = index - 1; i >= 0; i--) {
//         cout << binary[i];
//     }
//     cout << endl;
// }

// void processArraySets() {
//     int n, k;
//     cout << "Enter the size of the array (N) and the set size (K): ";
//     cin >> n >> k;
//     int arr[MAX_SIZE];
//     cout << "Enter array elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int minimum = *min_element(arr, arr + n);
//     vector<int> result;
//     for (int i = 0; i < n; ) {
//         int j = i;
//         while (j < n && arr[j] == arr[i]) {
//             j++;
//         }
//         int len = j - i;
//         if (len == k) {
//             result.push_back(minimum);
//         } else {
//             for (int l = i; l < j; l++) {
//                 result.push_back(arr[l]);
//             }
//         }
//         i = j;
//     }

//     cout << "Resulting array:\n";
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//         if ((i + 1) % 5 == 0) cout << endl;
//     }
//     if (result.size() % 5 != 0) cout << endl;
// }

// void removeItemsLessThanAverage() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[MAX_SIZE], sum = 0;
//     srand(time(0));
//     cout << "Generated array: ";
//     for (int i = 0; i < n; i++) {
//         arr[i] = rand() % 20;
//         cout << arr[i] << " ";
//         sum += arr[i];
//     }
//     cout << endl;

//     double average = double(sum) / n;
//     cout << "Average value: " << average << endl;

//     vector<int> filtered;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] >= average) {
//             filtered.push_back(arr[i]);
//         }
//     }

//     sort(filtered.begin(), filtered.end(), greater<int>());
//     cout << "Filtered and sorted array: ";
//     for (int num : filtered) {
//         cout << num << " ";
//     }
//     cout << endl;
// }

// void outputEvenValues() {
//     int n, m;
//     cout << "Enter the dimensions of the array (N x M): ";
//     cin >> n >> m;
//     int arr[MAX_SIZE][MAX_SIZE];

//     // Input array ensuring all values are non-negative
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             do {
//                 cout << "Enter a non-negative integer for element [" << i << "][" << j << "]: ";
//                 cin >> arr[i][j];
//             } while (arr[i][j] < 0);
//         }
//     }

//     int sumFirstItems = 0;
//     cout << "Even values:\n";
//     for (int i = 0; i < n; i++) {
//         cout << i + 1 << " row: ";
//         bool foundEven = false; // Track if any even number has been printed
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] % 2 == 0) {
//                 cout << arr[i][j] << " ";
//                 foundEven = true;
//             }
//         }
//         if (!foundEven) {
//             cout << "None"; // Print 'None' if no even values are found
//         }
//         cout << endl;
//         sumFirstItems += arr[i][0];
//     }
//     cout << "Sum of first items is: " << sumFirstItems << endl;
// }


// void matrixMultiplication() {
//     int n, m, p;
//     cout << "Enter dimensions for the matrices (N x M) and (M x P): ";
//     cin >> n >> m >> p;
//     int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], c[MAX_SIZE][MAX_SIZE] = {0};

//     cout << "Enter elements for the first matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << "a[" << i << "][" << j << "]= ";
//             cin >> a[i][j];
//         }
//     }

//     cout << "Enter elements for the second matrix:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < p; j++) {
//             cout << "b[" << i << "][" << j << "]= ";
//             cin >> b[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < p; j++) {
//             for (int k = 0; k < m; k++) {
//                 c[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }

//     cout << "Resulting matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < p; j++) {
//             cout << c[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void sortArrayRows() {
//     int n, m;
//     cout << "Enter the dimensions of the array (N x M): ";
//     cin >> n >> m;
//     int arr[MAX_SIZE][MAX_SIZE];

//     srand(time(0));
//     cout << "Generated array:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             arr[i][j] = rand() % 50;
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0) {
//             // Sort even rows in ascending order
//             sort(arr[i], arr[i] + m);
//         } else {
//             // Sort odd rows in descending order
//             sort(arr[i], arr[i] + m, greater<int>());
//         }
//     }

//     cout << "Sorted array:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

