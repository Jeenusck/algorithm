#include <iostream>
extern void convertToWave(int* arr, int n);
int main()
{
	int test1[] = { 672, 2619, 2763, 3895, 4041, 4732, 5900, 8794, 9496 };
	int test_exp1[] = { 2619, 672, 3895, 2763, 4732, 4041, 8794, 5900, 9496 };

	int test2[] = { 1,2,3,4,5 };
	int test_exp2[] = { 2, 1, 4, 3 ,5 };

	convertToWave(test1, 9);
	if (!std::equal(test_exp1, test_exp1+9,test1))
	{
		std::cout << "Test failed\n";
		return -1;
	}

	convertToWave(test2, 5);
	if (!std::equal(test_exp2, test_exp2+5, test2))
	{
		std::cout << "Test failed\n";
		return -1;
	}
	std::cout << "Test passed\n";

	return 0;

}