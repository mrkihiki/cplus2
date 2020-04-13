// GameL.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <math.h> 
#include <iostream>
#include <string.h>
using namespace std;
void vds(char** Arr);

int mn(char** Arr,int i, int j, int i1, int j1, int i2, int j2);
void swap(char** Arr, char** Arr2);
int main()
{
	setlocale(LC_ALL, "Russian");
	char** Arr; char** Arr2;
	char z[2] = " ", ll[2] = "Ж", zz[2] = "М";
	int num, n = 5, i1, i2, j1, j2,s,koll;
	cout << "koll = "; cin >> koll;
	Arr = new char* [n];// динамический массив
	for (int i = 0; i < n; i++)
	{
		Arr[i] = new char[n];
		for (int j = 0; j < n; j++)
		{
			num = rand();
			if (num % 2 != 0) { Arr[i][j] = zz[0]; }
			else { Arr[i][j] = ll[0]; };
			//cout << "Arr[" << i << "][" << j << "] = "; cin >> Arr[i][j];
			//cout << Arr[i][j];
		}
	}

	//Arr[0][0] = ll[0] ; Arr[0][1] = zz[0]; Arr[0][2] = ll[0]; Arr[0][3] = ll[0]; Arr[0][4] = ll[0];
	//Arr[1][0] = zz[0]; Arr[1][1] = zz[0]; Arr[1][2] = zz[0]; Arr[1][3] = ll[0]; Arr[1][4] = ll[0];
	//Arr[2][0] = zz[0]; Arr[2][1] = ll[0]; Arr[2][2] = zz[0]; Arr[2][3] = ll[0]; Arr[2][4] = zz[0];
	//Arr[3][0] = zz[0]; Arr[3][1] = zz[0]; Arr[3][2] = ll[0]; Arr[3][3] = zz[0]; Arr[3][4] = zz[0];
	//Arr[4][0] = zz[0]; Arr[4][1] = zz[0]; Arr[4][2] = zz[0]; Arr[4][3] = ll[0]; Arr[4][4] = ll[0];
	vds(Arr);
	Arr2 = new char* [n];// динамический массив
	for (int i = 0; i < n; i++)
	{
		Arr2[i] = new char[n];
		for (int j = 0; j < n; j++)
		{
			
			Arr2[i][j] = Arr[i][j];
		}
	}


	while (koll!=0)
	{

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				i1 = i - 1; i2 = i + 1; j1 = j - 1; j2 = j + 1; 
				if (Arr[i][j] == ll[0]) { s = mn(Arr, i, j, i1, j1, i2, j2); if (s < 2) { Arr2[i][j] = zz[0]; } else if (s > 3) { Arr2[i][j] = zz[0]; } }
				 if (Arr[i][j] == zz[0]) { s = mn(Arr, i, j, i1, j1, i2, j2); if (s == 3) { Arr2[i][j] = ll[0]; } }
				
			}


		
		}
		swap(Arr, Arr2);
		koll--;
		vds(Arr);
		
	}
	
}
void vds(char** Arr){
	cout << endl << " - - - - -" << endl;
	cout  << "|" << Arr[0][0] << "|" << Arr[0][1] << "|" << Arr[0][2] << "|" << Arr[0][3] << "|" << Arr[0][4] << "|" << endl;
	cout << " - - - - -" << endl;
	cout << "|" << Arr[1][0] << "|" << Arr[1][1] << "|" << Arr[1][2] << "|" << Arr[1][3] << "|" << Arr[1][4] << "|" << endl;
	cout << " - - - - -" << endl;
	cout << "|" << Arr[2][0] << "|" << Arr[2][1] << "|" << Arr[2][2] << "|" << Arr[2][3] << "|" << Arr[2][4] << "|" << endl;
	cout << " - - - - -" << endl;
	cout << "|" << Arr[3][0] << "|" << Arr[3][1] << "|" << Arr[3][2] << "|" << Arr[3][3] << "|" << Arr[3][4] << "|" << endl;
	cout << " - - - - -" << endl;
	cout << "|" << Arr[4][0] << "|" << Arr[4][1] << "|" << Arr[4][2] << "|" << Arr[4][3] << "|" << Arr[4][4] << "|" << endl;
	cout << " - - - - -" << endl;
}


int mn(char** Arr,int i, int j, int i1, int j1, int i2, int j2) {
	char zz[2] = "Ж"; int sum = 0;
	if (i1 > -1 && i1 < 5) { if (Arr[i1][j] == zz[0]) { sum++; } }
	if (i2 > -1 && i2 < 5) { if (Arr[i2][j] == zz[0]) { sum++; } }
	if (j1 > -1 && j1 < 5) { if (Arr[i][j1] == zz[0]) { sum++; } }
	if (j2 > -1 && j2 < 5) { if (Arr[i][j2] == zz[0]) { sum++; } }

	if (i1 > -1 && i1 < 5 && j1 > -1 && j1 < 5) { if (Arr[i1][j1] == zz[0]) { sum++; } }
	if (i2 > -1 && i2 < 5 && j1 > -1 && j1 < 5) { if (Arr[i2][j1] == zz[0]) { sum++; } }
	if (i1 > -1 && i1 < 5 && j2 > -1 && j2 < 5) { if (Arr[i1][j2] == zz[0]) { sum++; } }
	if (i2 > -1 && i2 < 5 && j2 > -1 && j2 < 5) { if (Arr[i2][j2] == zz[0]) { sum++; } }
	return sum;
}
void swap(char** Arr, char** Arr2) {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			Arr[i][j] = Arr2[i][j];
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
