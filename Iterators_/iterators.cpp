#include<iostream>
#include<iterator>

using namespace std;

int main() {

	//int arr[]{ 1, 98, 33, 99, 78 };
	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << arr[i] << ' ';
	//}
	//cout << '\n';

	//for (int item : arr) {  // только перебирает элементы
	//	cout << item << ' ';
	//}
	//cout << endl;

	/*
		input			==, !=,  *i, i++, ++i, *i++
		output			++i, i++, *i = value, *i++ = value
		forward			==, !=, *i, ++i, i++, *i++ = value  (знает только тот элемент, что находится после него)
		bidirectional	==, !=, *i, ++i, i++, *i++, --i, i--, *i--    (двигается в обе стороны)
		random access	i -=n, i + n, i -= n, i - n, i[n], i1 - i2, <, >, <=, >=, 
						==, !-, *i, ++i, i++, *i++, --i, i--, *i-- (может указывать на любое рандомное место в памяти. указатели относятся сюда)

	advance(InIter &iter, Dist d) - перемещает на заданную дистанцию
	distance(InIter &start, InIter &start) - расстояние между двумя итераторами
	*/

	
}