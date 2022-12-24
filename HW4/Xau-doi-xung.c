#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		char s[1005];
		scanf("%s", s);
		int check = 1;
		for (int i = 0; i < strlen(s) / 2; i++)
			if (s[i] != s[strlen(s)-i-1]){
				check = 0;
				break;
			}
		if (check) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}

