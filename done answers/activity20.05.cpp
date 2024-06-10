
#include <iostream>
#include <time.h>
using namespace std;
int** create(int n, int m);
void init(int** A, int n, int m);
void sum(int** A, int n, int m);
//void print(int* a, int n);
//void riseUp(int* a, int n);

int main()
{
	//int n;
	//cout << "Input the size: ";
	//cin >> n;
	//int* arr = new int[n];// allocate the memory
	//for (int i = 0; i < n; i++)
	//{
	//	cout << "Input arr[" << i << "]: ";
	//	cin >> *(arr + i); // arr[i]
	//}
	//print(arr, n);
	//riseUp(arr, n);
	int n = 0, m = 0;
	cout << "Input to rows and columns ";
	cin >> n >> m;
	int** A;
	A = create(n, m);
	init(A, n, m);
	sum(A, n, m);
	return 0;
}
int** create(int n, int m)
{
	int** A = new int* [n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[m];
	}
	return A;
}
void init(int** A, int n, int m)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 11 - 5;
			// *(*(A+i)+j)=rand() % 11 - 5;
			cout << "\t" << A[i][j];
		}
		cout << endl;
	}
}
void sum(int** A, int n, int m)
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (A[i][j] < 0)
			{
				for (int count = 0; count < m; count++)
				{
					res += A[i][count];
				}
				cout << "\n Sum of the items in the " << i + 1 << " row is "
					<< res;
				j = m;
				res = 0;
			}
		}
	}
}
//void print(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << *(a + i) << "\t ";
//	}
//}
//
//void riseUp(int* a, int n)
//{
//	int riseUp = 1, max;
//	max = *(a);//max = a[0]
//	for (int i = 0; i < n; i++)
//	{
//		if (max < *(a + 1)) max = *(a + 1);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (max < *(a + 1))
//		{
//			cout << "\n maximum index is " << i << endl;
//			*(a + i) += riseUp++;
//		}
//	}
//}