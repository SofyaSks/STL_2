#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <io.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
using namespace std;

// STL
// контейнер - блок для хранения данных (может хранить как значимые типы так и классы)
// алгоритм -  специальная функция для работы с данными, которые хранятся в контейнере
// итератор - входной (input) - чтение, выxодные(output) - запись ... однонаправленные start -> end и двунаправленные start -> end, end  -> start
// функтор - 
// предикат - специальная функция которая используется в другой функции в качестве параметра
// аллокатор - распределитель памяти, имеется у каждого контейнера как объект


int main() {
	
	//1 - string

	string str1 = "Petrov";
	string str2 = "Sidorov";
	//cout << str1.compare(str2) << endl; // petrov < sidorov
	//cout << str2.compare(str1) << endl; // sidorov > petrov
	// 0 if same
	
	//tolower() or toupper()

	// итератор
	vector <int> v = { 2, 56, 7, 4, 23 };
	vector <int>::iterator iter = v.begin();
	for (iter; iter < v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	auto iter2 = v.begin(); // auto - подстраивается под тип вектора

	vector<int> v1 = { 1,2,3,4,5 };
	vector <int> v2 = { 66, 45, 23, 222, 90, 7, 8 };
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << "\t";
	}
	cout << endl;
	
	

	return 0;
}