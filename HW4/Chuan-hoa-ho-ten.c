#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d\n", &t);
	while (t--){
		char s[10000], b[1000][1000];
		gets(s);
		for (int i = 0; i < strlen(s); i++)
			if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		char x[] = " ";
		char *token;
		token = strtok(s, x);
		int i = 0;
		while (token != NULL){
			strcpy(b[i], token);
			b[i++][0] -= 32;
			token = strtok(NULL, x);
		}
		for (int j = 0; j < i; j++) printf("%s ", b[j]);
		printf("\n");
	}
	return 0;
}
