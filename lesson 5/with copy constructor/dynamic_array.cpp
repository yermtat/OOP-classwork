#include"dynamic_array.h"
#include<iostream>

using namespace std;

DynamicArray::DynamicArray(int size) : arr{ new int[size] {} }, size{ size }
{
}

DynamicArray::~DynamicArray()
{
	delete[] arr;
}

DynamicArray::DynamicArray(const DynamicArray& other)
	:arr{new int[other.size]}, size{other.size}
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
	cout << "Dynamic Array copy constructed" << endl;
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