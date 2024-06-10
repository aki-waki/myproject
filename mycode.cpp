// #include <iostream>
// #include <time.h>

// using namespace std;

// #define MAX 100

// void print(int n, int m, int k[MAX][MAX]) {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//       cout << "\t" << k[i][j];
//     }
//     cout << endl;
//   }
// }

// void gen(int arr[MAX][MAX], int n, int m) {
//   srand(time(NULL) * 1000);
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//       arr[i][j] = rand() % 100;
//     }
//   }
// }

// void insertionSort(int arr[], int n) {
//   for (int i = 1; i < n; i++) {
//     int key = arr[i];
//     int j = i - 1;

//     while (j >= 0 && arr[j] > key) {
//       arr[j + 1] = arr[j];
//       j--;
//     }

//     arr[j + 1] = key;
//   }
// }

// int main() {
//   int n, m, arr[MAX][MAX], row;
//   cout << "Input rows, columns: ";
//   cin >> n >> m;

//   cout << "Generated array: " << endl;
//   gen(arr, n, m);
//   print(n, m, arr);

//   cout << "Input an index of the row that must be sorted: ";
//   cin >> row;

//   // Sort the specified row using insertion sort
//   insertionSort(arr[row], m);

//   // Copy the sorted row back into the original matrix
//   for (int j = 0; j < m; j++) {
//     arr[row][j] = arr[row][j];
//   }

//   cout << "Array with sorted " << row + 1 << " row: " << endl;
//   print(n, m, arr);
//   return 0;
// }