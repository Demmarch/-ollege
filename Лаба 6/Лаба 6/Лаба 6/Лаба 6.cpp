#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
	//setlocale(LC_ALL, "Russian");
	//char sl[50];
	//cout << "Введите слово - ";
	//cin >> sl;
	//vector<string> strs;
	//int n;                         
	//string x;                           
	//cout << "Введите количество слов (больше 2-х): \n";
	//cin >> n;
	//string endstr = ""; 
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> x;
	//	strs.push_back(x);
	//}
	//for (int i = 0; i < strs.size(); i++) {
	//	if (i == 2) {
	//		endstr = endstr + sl + " ";
	//	}
	//	endstr = endstr + strs[i] + " ";
	//} 
	//cout << endstr; //не работает с русским
	/*char txt[654];
	cout << "Введите текст (3 и более слов) - ";
	cin >> txt;
	vector<string> strs;
	char sep[] = " ";
	char *token = strtok(txt, sep);
	while (token) {
		strs.push_back(token);
		token = strtok(NULL, sep); - выдвало ошибку, что это небезопастный метод, следовательно я иду нафиг
	}
	int siz = strs.size();
	string endstr;
	if (siz <= 3) {
		endstr = strs[0] + sep[0] + strs[1] + sep[0] + sl + sep[0] + strs[2];
	}
	else {
		endstr = strs[0] + sep[0] + strs[1] + sep[0] + sl + sep[0] + strs[2];
		for (int i = 3; i < siz; i++) {
			endstr += sep[0] + strs[i];
		}
	}
	cout << endstr;*/
	/*int bolint = 0;
	char sep[] = " ";
	for (int i = 0; i < strlen(txt); i++) {
		if (txt[i] == sep[0]) {
			if (bolint == 2) {

			}
			bolint++;
		}
	}*/
	setlocale(LC_ALL, "ru"); //ввод латиницей
	string text;
	string newWord;
	string word;
	cout << "Введите текст: ";
	getline(cin, text);
	//cout << "Введите новое слово: ";
	//cin >> newWord;
	char *textChars = new char[text.size() + 1]; 
	strcpy_s(textChars, text.size() + 1, text.c_str());
	char *token;
	char *context = nullptr; 
	token = strtok_s(textChars, "/", &context);
	cout << "Введите букву: ";
	char findletter;
	cin >> findletter;
	while (token != nullptr) {
		word = token; 
		if (word[0] == findletter) {
			cout << word;
		}
		token = strtok_s(nullptr, "/", &context);   
	}
	delete[] textChars; 
	return 0;
}