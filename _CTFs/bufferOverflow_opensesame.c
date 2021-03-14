/*
SECOND EASIEST BUFFER OVERFLOW EXERCISE EVER!!

Solution: print 20 random characters and then the words "open sesame"
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
	char constvar[15];
    strcpy(constvar, "close sesame");
	
    char name[20];
	printf("please enter the secret password!\n");
	scanf("%s", &name);

	printf("Hmmmm %s... interesting password!\n", name);

    char correct[15];
    strcpy(correct, "open sesame");
	if (strcmp(constvar, correct)) {
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
