#include "day_one.h"

string input_file = "day_one_input.txt";
std::vector<int> inputlist;

int day_one()
{
	read_input();
	int saved;

	for (int input : inputlist)
	{
		saved = input;

		inputlist.erase(inputlist.begin());

		for (int j : inputlist)
		{
			if (saved + j == 2020)
			{
				return saved * j;
			}
		}
	}

	return -1;
}

void read_input()
{
	std::ifstream file(input_file, std::ios_base::in);

	std::copy(
		std::istream_iterator<int>(file),
		std::istream_iterator<int>(),
		std::back_inserter(inputlist));
}