#include <stdio.h>

int main() {
	char gnu[] = "GNU";
	fwrite(gnu, sizeof(char), sizeof(gnu) - 1, stdout);
	
	char notUnix[] = " is Not Unix";
	while (1) {
		fwrite(notUnix, sizeof(char), sizeof(notUnix) - 1, stdout);
	}
	// If we are here then we have solved the mystery of the universe
	return 0;
}
