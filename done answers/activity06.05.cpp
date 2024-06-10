#include <iostream>
#define MAX 100
using namespace std;
//int square(int m, int n);
//int Sum(int i, int A[MAX], int n);

int main()
{
	/*int a, b, result;
	cout << "Input the ractangle size ";
	cin >> a >> b;
	result = square(a, b);
	cout << "It's possible to cut the rectangle with sides "
		<< a << " " << b << "into " << result << "squares ";*/
	/*int n, Arr[MAX];
	cout << "Input the length of the array ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Input arr [" << i << "]= ";
		cin >> Arr[i];
	}
	cout << "Sum is: " << Sum(0, Arr, n);*/
	int total = 300;
	int *ptr = &total; // reference tp the total
	cout << total << " " << ptr << " " << *ptr << endl;
	(*ptr)++;
	cout << total << " " << ptr << " " << *ptr << endl;
	int* p = ptr;
	cout << total << " " << ptr << " " << p << endl;
	cout << &ptr << " " << &p << endl;
	int k = 2;
	cout << "p's address before addition " << &p << endl;
	p += k;
	cout << "p's address after addition " << &p << endl;
	cout << "ptr-p is " << p - ptr;
	return 0;
}
//int square(int m, int n)
//{
//	if (m == n) return 1; // base case
//	if (m > n) return 1 + square(m - n, n);
//	return 1 + square(m, n - m);
//}
//int Sum(int i, int A[MAX], int n)
//{
//	if (i == n - 1) return A[i];
//	else return A[i] + Sum(i + 1, A, n);
//}