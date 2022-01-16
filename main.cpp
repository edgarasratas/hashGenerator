#include "lib.h"
#include "readFile.h"
#include "hash.h"

int main()
{
	string input = "";
	string binaryInput = "";

	cout << "Reading file...\n\n";
	readFile("input.txt", input);
	cout << "Given input is: " << input << "\n\n";

	cout << "Given hash: \n";
	hash(input);
}