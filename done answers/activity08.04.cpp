#include <iostream>
using namespace std;
#define MAX 100
void gen(int x[MAX], int k, int a, int b);
void output(int x[MAX], int k);

int main()
{
    int arr[MAX], n, a, b;
    cout << "input the current size of the array ";
    cin >> n;
    cout << "input the values for the intervar ";
    cin >> a>>b;

    gen(arr, n, a, b);
    output(arr, n);

    /*for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
        if ((i + 1) % 10 == 0) cout << endl;
    }*/

    /*for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }*/
    /*for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
        if ((i + 1) % 5 == 0) cout << endl;
    }*/
    /*int i, n, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Hello world" << endl;
    }
    cout << "Hello world" << endl;
    */
    /*for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "Hello world" << endl;
        }
    }*/
    /*for (i = 1; i <= n; i=i*2)
    {
        cout << "Hello world" << endl;
    }*/
    /*for (i = 1; i <= n; i++)
    {
        cout << "Hello world" << endl;
    }*/
    return 0;
}

void gen(int x[MAX], int k, int a, int b)
{
    int i;
    srand(time(NULL) * 1000);
    for (int i = 0; i < k; i++)
    {
        x[i] = rand() % (b - a) + a;
    }
}

void output(int x[MAX], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << x[i] << "\t";
        if ((i + 1) % 10 == 0) cout << endl;
    }
}