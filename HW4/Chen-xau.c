#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		char s[1005];
		scanf("%s\n", &s);
		char c;
		scanf("%c", &c);
		int vt;
		scanf("%d", &vt);
		for (int i = 0; i < strlen(s); i++){
			if (i == vt){
				printf("%c%c", c, s[i]);
			}else printf("%c", s[i]);
		}
		if (t) printf("\n");
	}
	return 0;
}
