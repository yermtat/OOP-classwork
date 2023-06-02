#pragma once
#include<iostream>

using namespace std;

class DynamicArray
{
	private:

		int* arr;
		int size;
	public:
		DynamicArray(int size);
		DynamicArray() : DynamicArray(5) { cout << "Dynamic Array default" << endl; } /*{}*/

		//copy constructor
		DynamicArray(const DynamicArray& other);

		// move constructor
		DynamicArray(DynamicArray&& other);

		int getElement(int index) { return arr[index]; }
		void setElement(int index, int value) { arr[index] = value; }

		DynamicArray& operator=(const DynamicArray& other);

		DynamicArray& operator=(DynamicArray&& other);


		void show();
		void randomize();

		~DynamicArray();


};

