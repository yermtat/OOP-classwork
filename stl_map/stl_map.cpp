#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main() {
	map<int, int> mp;
	vector<int> vec;
	/*cout << vec.max_size() << endl;
	cout << mp.max_size() << endl;*/ // зависит от операционной системы и типа данных из которых создается объект

	/*int value{};
	int key{};
	cout << "Enter key: ";
	cin >> key;
	cout << "Enter value: ";
	cin >> value;

	pair<int, int> element(key, value);
	mp.insert(element);*/
	/*mp.insert(make_pair(5, 23));
	cout << mp[5] << endl;
	mp[5] = 26;
	cout << mp[5] << endl;*/
	mp[256] = 156;
	mp[35] = 39;  // если такого ключа нет он создается. самый простой способ добавить ключ и значение
	mp[1] = 15;
	mp[13] = 13;
	/*cout << mp[35] << endl;*/

	cout << mp.size() << endl;
	map<int, int>::iterator itera = mp.begin();
	for ( ; itera != mp.end(); itera++)
	{
		cout << "Key = " << itera->first << " Value = " << itera->second << endl;  // ключи автоматически сортируются по порядку от большего к меньшему
	}
	mp.find(15);
	cout << mp.at(15) << endl; //если такого ключа нет вбрасывается ошибка
}