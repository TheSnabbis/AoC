#include "day_one.h"

int day_one()
{
	string input_file = "day_one_input.txt";
	std::vector<int> inputlist;

	read_input_int(input_file, inputlist);
	
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

int day_one_part_two()
{
	string input_file = "day_one_input.txt";
	std::vector<int> inputlist;

	read_input_int(input_file, inputlist);

	int isaved, jsaved;

	for (int i : inputlist)
	{
		isaved = i;

		for (int j : inputlist)
		{
			jsaved = j;

			for (int k : inputlist)
			{
				if (isaved + jsaved + k == 2020)
				{
					return (isaved * j * k);
				}
			}
		}
	}

	return -1;
}