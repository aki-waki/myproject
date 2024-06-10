#include <iostream>
#define MAX 100
using namespace std;
void input_array(int n, int A[MAX]);
void output_array(int n, int A[MAX]);
void bubble(int n, int A[MAX]);
void selection(int n, int A[MAX]);
void insertion(int n, int A[MAX]);


int main()
{
	int n, Array[MAX];
	cout << "Input an array size: ";
	cin >> n;
	input_array(n, Array);
	cout << " Initial array: " << endl;
	output_array(n, Array);
	cout << "\n Sortedarray " << endl;
	/*bubble(n, Array);*/ 
	selection(n, Array);
	insertion(n, Array);

	output_array(n, Array);

	return 0;
}

void input_array(int n, int A[MAX])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Input a[" << i << "]: ";
		cin >> A[i];
	}
}
void output_array(int n, int A[MAX])
{
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}
}
void bubble(int n, int A[MAX])
{
	int temp;
	for (int k=0; k<n-1; k++)
	{
		for (int i=0; i<n-k-1; i++)
		{
			if (A[i] > A[i + 1])
			{
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}
		}
	}
}

void selection(int n, int A[MAX])
{
	int temp, min_in;
	for (int i = 0; i < n; i++)
	{
		min_in = i;
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] < A[min_in])
				min_in = j;
		}
		//swaping
		temp = A[i];
		A[i] = A[min_in];
		A[min_in] = temp;
	}
}

void insertion(int n, int A[MAX])
{
	int temp, j;
	for (int i = 0; i < n; i++)
	{
		temp = A[i];
		for (int j = i - 1; j >= 0 && A[j] > temp; j--)
		{
			A[j + 1] = A[j];
		}
		A[j + 1] = temp;
	}
}