#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
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
	cout << "\nThe Following is a 3x3 random matrix\n";
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout << setw(3) << arr[i][x] << "	";
		}
		cout << endl;
	}
}


void ArrayOfSumEachColomnInMatrix(int matrix[3][3], int newArray[3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		int sumOfColomnElements= 0;
		for (int x = 0; x < Colos; x++)
		{
			sumOfColomnElements += matrix[x][i];
		}
		newArray[i] = sumOfColomnElements;
	}
}
void printSumEachColomnInMatrix(int arr2[3], int Rows)
{
	cout << "\nThe Following are sum of Each Colomn in the matrix \n";
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
	cout << "==============";
	ArrayOfSumEachColomnInMatrix(arr, arr2, 3, 3);
	printSumEachColomnInMatrix(arr2, 3);

	
	









	system("pause>0");

	return 0;
}