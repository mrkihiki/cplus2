﻿// lab2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian"); bool prov = false;
	int* ms4; int* ms3; int** Arr1; int** Arr2;
	char buff[50]; float T;
	int n1, i = 0, j = 0, i1 = 0, j1 = 0, i2 = 0, j2 = 0, i3 = -1, i4 = -1,n,m,sum; ofstream fout; ifstream vod;
	vod.open("1.txt");//кол чет чисел.
	while (!vod.eof())
	{
		vod.getline(buff, 50); i1++;

	}
	vod.close();
	vod.open("1.txt");//кол чет чисел.
	while (!vod.eof())
	{
		vod >> n1;
		j1++;
	}
	j1 = j1 / i1;
	vod.close();
	vod.open("1.txt");
	Arr1 = new int* [i1];// динамический массив
	for (int i = 0; i < i1; i++)
	{
		Arr1[i] = new int[j1];
		for (int j = 0; j < j1; j++)
		{
			vod >> n1;
			Arr1[i][j] = n1;
		}
	}
	vod.close();

	for (int i = 0; i < i1; i++)
	{

		for (int j = 0; j < j1; j++)
		{
			printf("%5d", Arr1[i][j]);
		}
		cout << endl;
	}
	cout << "----------------------------------------"<<endl;
	vod.open("2.txt");//кол чет чисел.
	while (!vod.eof())
	{
		vod.getline(buff, 50); i2++;

	}

	vod.close();
	vod.open("2.txt");//кол чет чисел.
	while (!vod.eof())
	{
		vod >> n1;
		j2++;
	}
	j2 = j2 / i2;
	vod.close();
	vod.open("2.txt");
	Arr2 = new int* [i2];// динамический массив
	for (int i = 0; i < i2; i++)
	{
		Arr2[i] = new int[j2];
		for (int j = 0; j < j2; j++)
		{
			vod >> n1;
			Arr2[i][j] = n1;
		}
	}
	vod.close();

	for (int i = 0; i < i2; i++)
	{

		for (int j = 0; j < j2; j++)
		{
			printf("%5d", Arr2[i][j]);
		}
		cout << endl;
	}
	cout << "----------------------------------------" << endl;

	vod.open("3.txt");//кол чет чисел.
	while (!vod.eof())
	{
		vod >> n1;
		i3++;
	}
	
	vod.close();
	ms3 = new int[i3];

	vod.open("3.txt");
	for (int i=0 ; i<i3 ; i++)
	{ 
		vod >> n1;
		ms3[i] = n1;
	}
	vod.close();

	for (int i = 0; i < i3; i++)
	{
			printf("%5d", ms3[i]);
	}
	cout << endl<<"----------------------------------------" << endl;

	vod.open("4.txt");//кол чет чисел.
	while (!vod.eof())
	{
		vod >> n1;
		i4++;
	}
	
	vod.close();
	ms4 = new int[i4];

	vod.open("4.txt");
	for (int i = 0; i < i4; i++)
	{
		vod >> n1;
		ms4[i] = n1;
	}
	vod.close();

	for (int i = 0; i < i4; i++)
	{
		printf("%5d", ms4[i]);
	}
	cout <<endl <<"----------------------------------------" << endl;

	////////////////////////////////////////////////////////
	cout << "T = "; cin >> T;
	while (prov == false)
	{

		cout << "n = "; cin >> n;
		cout << "m = "; cin >> m;
		if (m < i4 && m < i3 && m < i2 && m < j1 && n < j2 && n < i1) { prov = true; }
		else { cout << "нет числа" << endl; }
	}
	sum = 5 * Arr1[n][m] * ms3[m] + pow(Arr2[m][n],T) * ms4[m];

	cout << "sum = " << sum << endl;
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
