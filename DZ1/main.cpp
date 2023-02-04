#include<iostream>
using namespace std;
#define tab "\t" 

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер масива - ";
	cin >> n;	
	int* arr = new int[n];	
	int x = 0;   //счетчик для выделения памяти массива с четными значениями
	int y = 0;   //счетчик для выделения памяти массива с нечетными значениями
	
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
		if (arr[i] % 2 == 0)
		{
			x++;		
		}
		else
		{
			y++;			
		}		
	}	
	cout << endl;
	for (int i = 0; i < n; i++) //Вывод базового массива на экран
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int* even = new int[x]; //Выделение памяти под массив even
	int* odd = new int[y];	//Выделение памяти под массив odd

	int j = 0; //дополнительная переменная для нумерации значений в массиве even
	int z = 0; //дополнительная переменная для нумерации значений в массиве odd

	for (int i = 0; i < n; i++) //Заполнение массивов четными и нечетными значениями из базового массива
	{		
		if (arr[i] % 2 == 0)
		{			
			even[j] = arr[i];	
			j++; 
		}		
		else
		{
			odd[z] = arr[i];
			z++;
		}
	}
	cout << endl;
	for (int i = 0; i < x; i++)
	{
		cout << even[i] << tab;
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < y; i++)
	{
		cout << odd[i] << tab;
	}	
	delete[]even;
	delete[]arr;	
	delete[]odd;
}