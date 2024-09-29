#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	ifstream file("File.txt");
	string line;
	vector<string> sentences;

	if (file.is_open()) {
		while (getline(file, line)) {
			int start = 0;
			int end = line.find(". ");

			while (end < string::npos) {
				string sentence = line.substr(start, end - start + 1);
				bool contain = false;
				for (char c : sentence) {
					if (c == ',') {
						contain = true;
						break;
					}
				}
				if (contain == false){
					sentences.push_back(sentence);
				}
				start = end + 2;
				end = line.find(". ", start);
			}
		}
		file.close();
	}
	else {
		cout << "Файл не открыт" << endl;
	}

	for (string sentence : sentences) {
		cout << sentence << endl;
	}
	return 0;
}
