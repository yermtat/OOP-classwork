#include"DynamicArray.h"
#include<iostream>

using namespace std;

DynamicArray::DynamicArray(int size) : arr{ new int[size]{} }, size{size}
{
}

DynamicArray::~DynamicArray()
{
	delete[] arr;
}

void DynamicArray::show() {

	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';
}

void DynamicArray::randomize() {
	srand(time(NULL));

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}