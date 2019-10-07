#include <string>
using namespace std;

#ifndef program_h
#define program_h

struct node
{
	node* next;
	char dta;
};

struct instructions {
	int pc;
	string op = "";
	node* symbol;
};
#endif