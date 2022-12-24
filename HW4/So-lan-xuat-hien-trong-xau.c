#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d\n", &t);
	while (t--){
		char x;
		scanf("%c\n", &x);
		char s[10000];
		gets(s);
		int cnt = 0;
		for (int i = 0; i < strlen(s); i++){
			if (x == s[i]) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}

