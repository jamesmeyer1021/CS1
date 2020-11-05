#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using std::cout; using std::cin; using std::endl;
using std::string; using std::ifstream; using std::ofstream;
using std::getline;

int main() {
	srand(time(nullptr));
	cout << "Enter a file name to justify: " << endl;
	string file;
	cin >> file;

	ifstream fin(file);
	ofstream fout("Justified.txt");

	string input;

	while (getline(fin,input)) {

		int index = input.find_first_of(".,!?;");
		if (input.size() < 75) {
			while (index != string::npos) {
				input.insert(index + 1, " ");
				index = input.find_first_of(".,!?;", index + 1);
			}
		}

		int space = 0;
		while (input.size() < 75) {
			space = input.find(" ", space);
			if (rand() % 2 == 0)
				input.insert(space + 1, " ");
			++space;
			if (space == string::npos) {
				space = 0;
			}
		}

		fout << input << endl;
	}
	fin.close();
}