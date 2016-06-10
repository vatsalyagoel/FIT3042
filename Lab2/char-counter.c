#include <stdio.h>

/* 
 * Reads the stdin until EOF is found to count the cumber of characters 
 * Use cat <filename> | ./char-counter  to count charactes in file
*/
int main() {
	int char_count = 0;
	char read_character;

	while((read_character = getchar()) != EOF) {
		char_count++;
	}

	printf("\nThe number of characters read: %d\n", char_count);
	return 0;
}