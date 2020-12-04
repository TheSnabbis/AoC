#include "readinput.h"

void read_input_int(string input_file, vector<int> &inputlist)
{
	std::ifstream file(input_file, std::ios_base::in);

	std::copy(
		std::istream_iterator<int>(file),
		std::istream_iterator<int>(),
		std::back_inserter(inputlist));
}