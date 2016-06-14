/*Compile with gcc -DFIZZ=\"Ping\" -DBUZZ=\"Pong\" to define compile time macros*/
#include <stdio.h>

#ifndef FIZZ
#define FIZZ "Fizz"
#endif

#ifndef BUZZ
#define BUZZ "Buzz"
#endif

int main(int argc, char const *argv[])
{
	int i;
	for (i = 0; i < 100; ++i) 
	{
		if((i % 3 == 0) && (i % 5 == 0)) 
		{
			printf("%s%s\n", FIZZ, BUZZ);
		}
		else if (i % 3 == 0)
		{
			printf("%s\n", FIZZ);
		}
		else if (i % 5 == 0)
		{
			printf("%s\n", BUZZ);
		}
		else
		{
			printf("%d\n", i);
		}
	}
	return 0;
}