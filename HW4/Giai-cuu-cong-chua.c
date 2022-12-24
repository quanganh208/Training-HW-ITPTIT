#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	char s[100000];
	gets(s);
	for (int i = strlen(s) - 1; i >= 0; i--) printf("%c", s[i]);
	return 0;
}

