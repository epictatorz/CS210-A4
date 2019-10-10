#ifndef program_h
#define program_h

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

const int MAX_SIZE = 50;

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

string getFile();

void readFile(string, instructions[MAX_SIZE]);

#endif
