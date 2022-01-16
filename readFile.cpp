#include "lib.h"
#include "readFile.h"

void readFile(string readFile, string& input) {
	string result;

	ifstream in(readFile);

	getline(in, input);
}