#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d\n", &t);
	while (t--){
		char s[10000];
		gets(s);
		char x[] = " ";
		char *token;
		token = strtok(s, x);
		int i = 0;
		while (token != NULL){
			if (token[0] >= 'a' && token[0] <= 'z') token[0] -= 32;
			printf("%s", token);
			token = strtok(NULL, x);
		}
		printf("\n");
	}
	return 0;
}
