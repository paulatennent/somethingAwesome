/*
EASIEST BUFFER OVERFLOW EXERCISE EVER!!

Solution: print 20 random characters and then literally anything
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void win(void);
void doCheck(void);

int main(int argc, char** argv) {
	doCheck();
	return EXIT_SUCCESS;
}

void doCheck(void) {
    // turn off print buffering
        setbuf(stdout, NULL);
    // setup local variables
	char constvar = '_';
	
    char name[20];
	printf("dont type too much, i don't like long passwords!!\n");
	//scanf("%s", &name);
	gets(name);

	printf("Hmmmm %s... interesting password!, you didnt make it longer than 20 characters right?\n", name);
	printf("%c\n", constvar);
	if (constvar != '_') {
		win();
	} else {
        printf("WRONG! try again!");
    }

	return;
}

void win(void) {
	printf("WIN!\n");
	return;
}
