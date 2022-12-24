#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		char s[10000];
		scanf("\n");
		gets(s);
		char c;
		scanf("%c", &c);
		for (int i = 0; i < strlen(s); i++)
			if (s[i] != c) printf("%c", s[i]);
		printf("\n");
	}
	return 0;
}
