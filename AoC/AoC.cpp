#include "main.h"
#include "day_one.h"
#include "day_two.h"

int main()
{
	//exec_func(day_one);

	exec_func(day_one_part_two);

	getchar();
    return 0;
}

// function == method-name
void exec_func(int(*function)())
{
	auto t1 = std::chrono::high_resolution_clock::now();
	int number = function();
	auto t2 = std::chrono::high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1).count();

	if (number != -1)
	{
		cout << "Answer: " << number << endl;
		cout << "Time spent: " << duration << " seconds." << endl;
	}
}
