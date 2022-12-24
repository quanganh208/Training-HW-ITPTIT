#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		char s[10000];
		scanf("%s", s);
		char tmp = s[0];
		for (int i = 0; i < strlen(s); i++){
			int cnt = 1;
			while (s[i+1] == s[i]){
				cnt++;
				i++;
			}
			if (cnt != 1) printf("%c%d", s[i], cnt);
			else printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}
