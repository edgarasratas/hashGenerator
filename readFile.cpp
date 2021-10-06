#include "lib.h"
#include "readFile.h"
#include "toBinary.h"
#include "toHex.h"

void readFile(string readFile, string& input) {
	string result;

	ifstream in(readFile);

	getline(in, input);

	cout << input << '\n';
}