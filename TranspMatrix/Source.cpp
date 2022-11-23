#include <iostream>
#include "Header.h"
#include <ctime>
void init(int** &matrix, int n, int m)
{
	matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}
}

void initValues(int** &matrix, int n, int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << "¬ведите элемент матрицы " << i+1 << ' ' << j+1 << '\n';
			std::cin >> matrix[i][j];
		}
	}
}

void printMatrix(int** matrix, int n, int m)
{
	std::cout << '\n';
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << matrix[i][j] << '\t';
		}
		std::cout << '\n';
	}
}

void transp(int** &matrix, int &n, int &m)
{
	int** matrixT = 0;
	init(matrixT, m, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrixT[j][i] = matrix[i][j];
		}
	}
	deleteMatrix(matrix, n);
	matrix = matrixT;
	int a = n;
	n = m;
	m = a;
}

void deleteMatrix(int** &matrix, int n)
{
	for (int i = 0; i < n; i++)
		delete[] matrix[i];
	delete[] matrix;
}
