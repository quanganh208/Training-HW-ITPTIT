#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi
long long sum (long long a, long long b){
	return a + b;
}
int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		char s[10000];
		scanf("\n");
		gets(s);
		char x[] = " ";
		char *token;
		token = strtok(s, x);
		int cnt = 0;
		while (token != NULL){
			token = strtok(NULL, x);
			cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}

