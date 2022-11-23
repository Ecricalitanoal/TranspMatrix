#include <iostream>
#include "Header.h"
#include <ctime>
int main()
{
    setlocale(0, "");
    int** matrix = 0;
    int n, m;
    std::cout << "Введите размеры матрицы\n";
    std::cin >> n >> m;
    init(matrix, n, m);
    initValues(matrix, n, m);
    printMatrix(matrix, n, m);
    transp(matrix, n, m);
    printMatrix(matrix, n, m);
}
