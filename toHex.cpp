#include "lib.h"
#include "toHex.h"

string toHex(string input) {
	std::stringstream stream;
	stream << std::hex << input;
	std::string result(stream.str());
}