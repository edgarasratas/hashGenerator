#include "lib.h"
#include "toHex.h"

void toHex(string& input) {
	stringstream stream;

	for (string::size_type i = 0; i < input.length(); i++)
		stream << std::hex << (int)input[i];

	string result(stream.str());
	cout << result;
}