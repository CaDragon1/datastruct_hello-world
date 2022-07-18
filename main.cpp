/*********************
* Name: Caleb Drake
* Data Structures
* Purpose: Modify a "Hello World" program and submit through GitHub.
*          This demonstrates correct header file, github, coding process, and command line usage.
*          This is the "main.cpp" file, which calls the necessary functions to produce the program's output.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    cout << "My Command line analyzer..." << endl;
    cout << "The number of command line parameters are: " << argc << endl;

    // Display the length of the name of the program
    // In Cygwin the command is './a', so that would lead to the length '3'.
    // In Linux the command is 'a.out', so that would lead to the length '5'.
    cout << "The length of the name of the program is: " << string_length(argv[0]) << endl;

    // For each argument passed, find the character length via the 'string_length()' function
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            cout << "The length of the parameter " << i << " is " << string_length(argv[i]) << endl;
        } 
    }

    return 0;
}
