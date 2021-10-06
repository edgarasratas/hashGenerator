#include "lib.h"
#include "readFile.h"
#include "toBinary.h"
#include "toHex.h"

int main()
{
	string input = "";

	readFile("input.txt", input);

	toBinary(input);

	toHex(input);
}