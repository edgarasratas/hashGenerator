#include "lib.h"
#include "toBinary.h"

void toBinary(string input) {
	for (std::size_t i = 0; i < input.size(); ++i) {
		cout << input[i] << ": " << bitset<8>(input[i]) << '\n';
	}
}