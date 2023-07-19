#include<iostream>
#include<map>

using namespace std;

template<class Container>
void Show(Container container) {
	for (auto i = container.begin(); i != container.end(); i++)
	{
		cout << "City: " << i->first << " Index: " << i->second << endl;
	}
}

int main() {
	map<string, int> cityIndex;
	multimap<string, int> cityMultiIndex;

	cityIndex.insert(make_pair<string, int>("Baku", 10));
	cityIndex["Sumgayit"] = 50;
	cityIndex["Bilasuvar"] = 12;
	cityIndex["Ganja"] = 20;
	cityIndex["Goranboy"] = 22;
	cityIndex["Gubadli"] = 39;
	Show(cityIndex);
	cout << '\n' << endl;

	cityMultiIndex.insert(make_pair<string, int>("Baku", 10));
	cityMultiIndex.insert(make_pair<string, int>("Sumgayit", 50));
	cityMultiIndex.insert(make_pair<string, int>("Bilasuvar", 12));
	cityMultiIndex.insert(make_pair<string, int>("Ganja", 20));
	cityMultiIndex.insert(make_pair<string, int>("Goranboy", 22));
	cityMultiIndex.insert(make_pair<string, int>("Gubadli", 39));
	cityMultiIndex.insert(make_pair<string, int>("Baku", 90));
	cityMultiIndex.insert(make_pair<string, int>("Baku", 77));
	Show(cityMultiIndex);
	cout << '\n' << endl;

	for (auto i = cityMultiIndex.lower_bound("Baku"); i != cityMultiIndex.upper_bound("Baku"); i++)
	{
		cout << "City: " << i->first << " Index: " << i->second << endl;
	}

	cout << cityMultiIndex.count("Baku") << endl;
}