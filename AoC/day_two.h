#pragma once
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

using std::string;
using std::vector;
using std::ifstream;
using std::stringstream;

struct InputData
{
	int minAmount;
	char bind;
	int maxAmount;
	char character;
	char colon;
	string password;
};

void readList(ifstream &fin, vector<InputData>& input);

int day_two_part_one();

int day_two_part_two();