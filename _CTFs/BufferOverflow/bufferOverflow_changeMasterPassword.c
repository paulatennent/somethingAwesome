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
	char masterPass[10];
    strcpy(masterPass, "top men");
	
    char password[10];
	printf("please enter the secret password!\n");
	scanf("%s", &password);

	printf("Hmmmm %s... interesting password!\n", password);
	if (! strncmp(password, masterPass, 10)) {
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
