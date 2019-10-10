#include "program.h"

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
