#include "day_two.h"

void readList(ifstream &fin, vector<InputData>& input)
{
	string line;
	while (getline(fin, line))
	{
		stringstream ss(line);
		InputData data;
		if (ss >> data.minAmount >> data.bind >> data.maxAmount >> data.character >> data.colon >> data.password)
		{
			input.push_back(data);
		}
	}
}

int day_two_part_one()
{
	vector<InputData> inputVector;
	ifstream fin("day_two_input.txt");
	int validAmount = 0;
	int charRepeated = 0;

	readList(fin, inputVector);

	for (InputData n : inputVector)
	{
		for (char c : n.password)
		{
			if (c == n.character)
			{
				charRepeated++;
			}
		}

		if (charRepeated >= n.minAmount && charRepeated <= n.maxAmount)
		{
			validAmount++;
		}

		charRepeated = 0;
	}

	return validAmount;
}

int day_two_part_two()
{
	vector<InputData> inputVector;
	ifstream fin("day_two_input.txt");

	int validAmount = 0;
	int charRepeated = 0;

	readList(fin, inputVector);

	for (InputData n : inputVector)
	{
		if ((n.character == n.password[n.minAmount - 1] && n.character != n.password[n.maxAmount - 1]) || (n.character != n.password[n.minAmount - 1] && n.character == n.password[n.maxAmount - 1]))
		{
			validAmount++;
		}
	}

	return validAmount;
}