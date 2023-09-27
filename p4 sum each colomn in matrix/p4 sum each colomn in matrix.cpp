#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}
int sumArrayNumbers(int arr[3][3], int length, int ColNumber)
{
	int sum = 0;
	for (int x = 0; x < length; x++)
	{
		sum += arr[x][ColNumber];
	}
	return sum;
}
void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(1, 100);
		}
	}
}
void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	cout << "The Following is a 3x3 random matrix\n";
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout << setw(3) << arr[i][x] << "	";
		}
		cout << endl;
	}
	cout << endl << endl;
}


void ArrayOfSumEachColomnInMatrix(int matrix[3][3], int arr2[3], int Rows, int Colos)
{
	for (int i = 0; i < Colos; i++)	//{ {1,2,3}, {4,5,6}, {7,8,9} }
	{								
		arr2[i] = sumArrayNumbers(matrix, Colos, i);
	}
}
void printSumEachColomnInMatrix(int arr2[3], int Rows)
{
	cout << "The Following are sum of Each Colomn in the matrix \n";
	for (int i = 0; i < Rows; i++)
	{
		cout << "Colomn " << i + 1 << " sum = " << arr2[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arr2[3];

	fill3X3MatrixWithRandomNumbers(arr, 3, 3);
	printMatrix3X3(arr, 3, 3);
	cout << "==============\n";
	ArrayOfSumEachColomnInMatrix(arr, arr2, 3, 3);
	printSumEachColomnInMatrix(arr2, 3);

	
	









	system("pause>0");

	return 0;
}