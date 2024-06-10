#include <iostream>
#define MAX 10
#include <time.h>
using namespace std;
void input(int n, int m, int A[MAX][MAX]);
void output(int n, int m, int A[MAX][MAX]);
void gen(int n, int m, int A[MAX][MAX]);
void matrix_sum(int n, int m, int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX]);
void row_sum(int n, int m, int A[MAX][MAX]);
//void input_array(int n, int A[MAX]);
//void output_array(int n, int A[MAX]);
//void search(int n, int A[MAX], int target);
//void minmax(int n, int A[MAX]);

int main()
{
    /*int n, Array[MAX], target;
    cout << "Input an array size: ";
    cin >> n;
    cout << "Input the target value: ";
    cin >> target;+
    input_array(n, Array);
    output_array(n, Array);
    search(n, Array, target);
    minmax(n, Array);*/
    int n, m, A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    cout << "Input rows and columns ";
    cin >> n >> m;

    gen(n, m, A);
    /*input(n, m, A);*/
    output(n, m, A);

    gen(n, m, B);
    output(n, m, B);

    matrix_sum(n, m, A, B, C);

    output(n, m, C);
    row_sum(n, m, C);

    return 0;
}
void input(int n, int m, int A[MAX][MAX])
{
    for (int i=0; i<n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "x[" << i << "][" << j << "]=";
            cin >> A[i][j];
        }
    }
}
void output(int n, int m, int A[MAX][MAX])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "\t" << A[i][j];
        }
        cout << endl;
    }
}
void gen(int n, int m, int A[MAX][MAX])
{
    srand(time(NULL) * 1000);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand() % 10;
        }
    }
}
void matrix_sum(int n, int m, int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void row_sum(int n, int m, int A[MAX][MAX])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += A[i][j];
        }
        cout << "sum of the " << i << "th row is " << sum << endl;
        sum = 0;
    }
}
//void input_array(int n, int A[MAX])
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Input a[" << i << "]: ";
//        cin >> A[i];
//    }
//}
//void output_array(int n, int A[MAX])
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << A[i] << "\t";
//    }
//}
//void search(int n, int A[MAX], int target)
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (A[i] == target)
//            cout << "\n Index of target values is " << i << endl;
//    }
//}
//void minmax(int n, int A[MAX])
//{
//    int min, max;
//    min = max = A[0];
//    for (int i = 0; i < n; i++)
//    {
//        if (A[i] < min) min = A[i];
//        if (A[i] > max) max = A[i];
//    }
//    cout << "\n Maximum is " << max;
//    cout << "\n Minimum is " << min;
//}




// #include <iostream>
// #include <ctime>
// #define MAX 10
// using namespace std;

// void input(int n, int m, int A[MAX][MAX]);
// void output(int n, int m, int A[MAX][MAX]);
// void gen(int n, int m, int A[MAX][MAX]);
// void matrix_sum(int n, int m, int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX]);
// void row_sum(int n, int m, int A[MAX][MAX]);

// int main()
// {
//     int n, m, A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
//     cout << "Input rows and columns: ";
//     cin >> n >> m;

//     gen(n, m, A);
//     cout << "Matrix A: " << endl;
//     output(n, m, A);

//     gen(n, m, B);
//     cout << "Matrix B: " << endl;
//     output(n, m, B);

//     matrix_sum(n, m, A, B, C);

//     cout << "Sum Matrix C: " << endl;
//     output(n, m, C);

//     row_sum(n, m, C);

//     return 0;
// }

// void input(int n, int m, int A[MAX][MAX])
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << "x[" << i << "][" << j << "] = ";
//             cin >> A[i][j];
//         }
//     }
// }

// void output(int n, int m, int A[MAX][MAX])
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << "\t" << A[i][j];
//         }
//         cout << endl;
//     }
// }

// void gen(int n, int m, int A[MAX][MAX])
// {
//     srand(time(0));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             A[i][j] = rand() % 10;
//         }
//     }
// }

// void matrix_sum(int n, int m, int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX])
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }
// }

// void row_sum(int n, int m, int A[MAX][MAX])
// {
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < m; j++)
//         {
//             sum += A[i][j];
//         }
//         cout << "Sum of the " << i << "th row is " << sum << endl;
//     }
// }
