#include <locale>
#include <vector>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	vector<int> v;
	v.push_back(3);
	cout << v.size() << endl;
	for (int i = 0; i < 4; i++) {
		v.push_back(i * 2 + 1);
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	v.pop_back();
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	cout << v.size() << endl;
	v.resize(5);
	vector<int> w;
	w = v;
	for (int i = 0; i < v.size(); i++) {
		v[i] = rand() / 1000;
	}
	cout << endl << "1-ый вектор v ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl << "2-ой вектор w ";
	for (int i = 0; i < w.size(); i++) {
		cout << w[i] << " ";
	}
}

