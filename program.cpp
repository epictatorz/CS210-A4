#ifndef program_cpp
#define program_cpp

#include "program.h"

void readFile(string fName, instructions b[MAX_SIZE]) {
	string temp;
	int i;
	ifstream input;
	input.open(fName);
	while (!EOF) {
		getline(input, temp, ' ');
		cout << temp << endl;
		i = stoi(temp);
		getline(input, temp, ' ');
		cout << temp << endl;
		a[i].op = temp;
		getline(input, temp);
		cout << temp << endl;
    }
}

string getFile()
{
	bool test = false;
	int i = 0;
	string s;
	ifstream t;
	while (test == false) {
		t.open(s);
		if (t.is_open()) {
			system("cls");
			return s;
		}
		else if (i > 0) {
			cout << "Error, Please try again." << endl;
		}
		cout << "Enter name of input file." << endl;
		cin >> s;
		i++;
	}
	cout << "Error." << endl;
	return "exit";
}

#endif