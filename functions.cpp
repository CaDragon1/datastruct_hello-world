/*********************
* Name: Caleb Drake
* Data Structures
* Purpose: Modify a "Hello World" program and submit through GitHub.
*          This demonstrates correct header file, github, coding process, and command line usage.
*          This is the "functions.cpp" file, which contains—shocker—the functions for the program.
**********************/

#include "functions.h"

int string_length(const char* str) {

	// Find the length of str by having a counter increment up for each character that is not the null pointer
	int counter = 0;
	while (*str != '\0') {
		counter++;
		str++;
	}
	
	return counter;
}