#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include "tests.h"

// Substitution cipher or Caesar�s cipher.

// This program which reads a natural number n and a string s. The string s is encoded using Caesar�s cipher with a displacement of n (either positive or negative).
// The program decodes the message and display it on the screen. Punctuation marks and numbers are left as they are.


// DO NOT CHANGE THE SIGNATURE OF THIS METHOD
void encrypt(char s[], int n) {
	// TODO your code here
	// add your encryption code here. the string s will be modified in place, using a displacement of n
}

int main()
{

	// To enable the tests, ctrl+click on ENABLE_TESTS (or go to the file "tests.h") and change the line
	// #define ENABLE_TESTS 0
	// to:
	// #define ENABLE_TESTS 1
#if ENABLE_TESTS > 0
	run_tests(true);
#endif
	
	// TODO your code here
	return 0;
}