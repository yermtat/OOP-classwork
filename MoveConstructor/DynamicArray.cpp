#include "DynamicArray.h"

#include<iostream>

using namespace std;

DynamicArray::DynamicArray(int size) : arr{ new int[size] {} }, size{ size }
{
}

DynamicArray::~DynamicArray()
{
	delete[] arr;
}


// copy constructor
DynamicArray::DynamicArray(const DynamicArray& other)
	:arr{ new int[other.size] }, size{ other.size }
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
	cout << "Dynamic Array copy constructed" << endl;
}

// move constructor
DynamicArray::DynamicArray(DynamicArray&& other)
	:arr{other.arr}, size{other.size}
{
	other.arr = nullptr;
	other.size = 0;

	cout << "Dynamic Array move constructed" << endl;
}

DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
	if (!(this == &other)) {
		if (size != other.size) {
			delete[] arr;
			arr = new int[other.size];
		}
		size = other.size;

		int* dest{ arr };
		int* src{ other.arr };

		int* const end{ arr + size };

		while (dest < end) {
			*dest++ = *src++;
		}

		/*for (size_t i = 0; i < size; i++)
		{
			arr[i] = other.arr[i];
		}*/
	}

	cout << "Dynamic Array assign operator" << endl;

	return *this;
}

DynamicArray& DynamicArray::operator=(DynamicArray&& other) {
	if (!(this == &other)) {
		delete arr;
		arr = other.arr;
		size = other.size;
		other.arr = nullptr;
		other.size = 0;
	}

	cout << "Dynamic Array move assign operator" << endl;

	return *this;
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
