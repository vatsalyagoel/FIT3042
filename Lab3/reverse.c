#include <stdio.h>
#include <string.h>

void reverse(char *string)
{
	int len= strlen(string) , i;
	char tmp;

	for (i = 0; i < len/2; ++i)
	{
		tmp = string[i];
		string[i] = string[len - i - 1];
		string[len - i - 1] = tmp;
	}
}

int main(int argc, char *argv[])
{
	reverse(argv[1]);
	printf("%s\n", argv[1]);
	return 0;
}