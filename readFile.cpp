#include "lib.h"
#include "readFile.h"
#include "toBinary.h"

void readFile(string readFile, string input) {
	ifstream in(readFile);

	getline(in, input);

	cout << input << '\n';

	toBinary(input);
}