#include "day_one.h"

void read_input_int(string input_file, vector<int> &inputlist)
{
	std::ifstream file(input_file, std::ios_base::in);

	std::copy(
		std::istream_iterator<int>(file),
		std::istream_iterator<int>(),
		std::back_inserter(inputlist));
}

int day_one()
{
	string input_file = "day_one_input.txt";
	std::vector<int> inputlist;

	read_input_int(input_file, inputlist);

	for (int& input : inputlist)
	{
		for (int& j : inputlist)
		{
			if (input + j == 2020)
			{
				return input * j;
			}
		}
	}

	return -1;
}

int day_one_part_two()
{
	string input_file = "day_one_input.txt";
	std::vector<int> inputlist;

	read_input_int(input_file, inputlist);

	for (int& i : inputlist)
	{
		for (int& j : inputlist)
		{
			for (int& k : inputlist)
			{
				if (i + j + k == 2020)
				{
					return (i * j * k);
				}
			}
		}
	}

	return -1;
}