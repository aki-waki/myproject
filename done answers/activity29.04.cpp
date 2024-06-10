#include <iostream>
#define MAX 100
using namespace std;
int fact(int n);
//void input_array(int n, int A[MAX]);
//void output_array(int n, int A[MAX]);
//void InsertSort(int k, int x[MAX]);
//int binary_search(int x[MAX], int l, int r, int target);

int main()
{
	/*int n, Array[MAX], target, result;
	cout << "Input an array size: ";
	cin >> n;
	input_array(n, Array);
	output_array(n, Array);

	cout << "\n Sorted array ...\n";
	InsertSort(n, Array);
	output_array(n, Array);

	cout << "Input a target value: ";
	cin >> target;
	result = binary_search(Array, 0, n - 1, target);
	(result == -1) ?
		cout << "Target value is not in the array "
		: cout << "The first occurrence is at the index " << result;*/
	int n;
	cout << "Input anatural number ";
	cin >> n;
	if (n < 0) cout << "You should input n >= 0 ";
	else cout << n << "!= " << fact(n) << endl;
	return 0;
}
int fact(int n)
{
	if (n == 0) return 1;
	return n * fact(n - 1);
}
//void input_array(int n, int A[MAX])
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Input a[" << i << "]: ";
//		cin >> A[i];
//	}
//}
//
//void output_array(int n, int A[MAX])
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << A[i] << "\t";
//	}
//}
//
//void InsertSort(int k, int x[MAX])
//{
//	int i, j, temp;
//	for (i = 0; i < k; i++)
//	{
//		temp = x[i];
//		for (j = i - 1; j >= 0 && x[j] > temp; j--)
//		{
//			x[j + 1] = x[j];//move the element to the right
//		}
//		x[j + 1] = temp; // insert an item
//	}
//}
//int binary_search(int x[MAX], int l, int r, int target)
//{
//	while (l <= r)
//	{
//		int m;
//		m = l + (r - l) / 2;
//		if (x[m] == target) return m;
//		if (x[m] < target) l = m + 1;
//		else r = m - 1;
//	}
//	return -1;
//}