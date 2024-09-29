#include <iostream>
using namespace std;

const int m = 3;
const int n = 3;

void inparr(int a[m][n])
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
}void outarr(int a[m][n])
{
	int i, j;
	setlocale(LC_ALL, "ru");
	printf("Матрица:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++) 
		{
			cout << a[i][j] << " ";
		}
		printf("\n");
	}
}void prossmatrix(int a[m][n])
{
	int max_el = a[0][0];
	int m_for_max = 0;
	int min_el = a[0][0];
	int m_for_min = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (max_el < a[i][j])
			{
				max_el = a[i][j];
				m_for_max = i;
			}
			if (min_el > a[i][j])
			{
				max_el = a[i][j];
				m_for_min = i;
			}
		}
	}
	int buffer;
	for (int j = 0; j < 3; j++) {
		buffer = a[m_for_max][j];
		a[m_for_max][j] = a[m_for_min][j];
		a[m_for_min][j] = buffer;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int matrix[m][n];
	cout << "Введите элементы матрицы: " << endl;
	inparr(matrix);
	cout << "Массив до смены местами строк: " << endl;
	outarr(matrix);
	cout << "Массив после смены местами строк: " << endl;
	prossmatrix(matrix);
	outarr(matrix);
}
    