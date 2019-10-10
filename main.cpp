#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "program.h"
using namespace std;
const int MAX_SIZE = 50;

string getFile();

int main() {
	string fName = getFile();
	string temp;
	program instruction;
	
	ifstream in;
	in.open(fName);
	while (!EOF) {
		getline(in, temp);
		instruction.insert(temp);
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