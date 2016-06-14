#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	for (i = 0; i < 100; ++i) 
	{
		if((i % 3 == 0) && (i % 5 == 0)) 
		{
			printf("%s\n", "FizzBuz");
		}
		else if (i % 3 == 0)
		{
			printf("%s\n", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s\n", "Buzz");
		}
		else
		{
			printf("%d\n", i);
		}
	}
	return 0;
}