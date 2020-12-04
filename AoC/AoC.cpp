#include "main.h"
#include "day_one.h"
#include "day_two.h"

int main()
{
	//exec_func(day_one);

	exec_func(day_two_part_two);

	getchar();
    return 0;
}

// function == method-name
void exec_func(int(*function)())
{
	int number = function();

	if (number != -1)
	{
		cout << number << endl;
	}
}
