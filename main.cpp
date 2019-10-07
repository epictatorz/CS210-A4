#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "program.h"
using namespace std;
const int MAX_SIZE = 50;

string getFile();
void readFile(string, instructions);

int main() {
	string fName = getFile();
	if (fName == "exit") { return 0; }

	instructions a[MAX_SIZE];
	string temp, temp1;
	int j = 0;
	ifstream input;
	input.open(fName);
	cout << "HI" << endl;
	while (input.eof() == false) {
		for (int i = 0; i < MAX_SIZE; i++){
			getline(input, temp);
			if (i < 10) {
				j = 1;
				while (temp.at(j) != ' ') {
					a[i].op += temp.at(j);
					j++;
				}
			}
			else {
				j = 2;
				while (temp.at(j) != ' ') {
					a[i].op += temp.at(j);
					j++;
				}
			}
			temp = temp.substr(j + 1);
			a[i].symbol->dta;
		}
	}


	return 0;
}

string getFile() {
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
//void readFile(string fName, instructions b[MAX_SIZE]) {
//	string temp;
//	int i;
//	ifstream input;
//	input.open(fName);
//	while (!EOF) {
//		getline(input, temp, ' ');
//		cout << temp << endl;
//		i = stoi(temp);
//		/*getline(input, temp, ' ');
//		cout << temp << endl;
//		a[i].op = temp;
//		getline(input, temp);
//		cout << temp << endl;*/
//	}
//
//}