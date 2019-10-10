#include <string>
using namespace std;

#ifndef program_h
#define program_h
const int MAX_SIZE = 25;

struct instruction {
	string operation;
	char* operand;
};

class program {
	int p;
	int length;
	instruction a[MAX_SIZE];

public:
	program();
	string read();
	void write();
	void insert (string);
};
#endif
void program::insert(string temp) {
	int x = temp.find(' ');
	a[length].operation = temp.substr(0,x);
	x = temp.length();
	a[length].operand = temp[x];
	length++;
}
