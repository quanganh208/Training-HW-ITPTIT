#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		char s[1000];
		int c[300] = {0};
		int cnt = 0;
		scanf("%s", s);
		for (int i = 0; i < strlen(s); i++) c[s[i]]++;
		for (int i = 0; i < 300; i++)
			if (c[i]) cnt++;
		if (cnt > 10){
			printf("-1\n");
			continue;
		}else{
			int p[300];
			for (int i = 0; i < 300; i++) p[i] = -1;
			int max = 9;
			for (int i = 0; i < strlen(s); i++){
				if (p[s[i]] == -1) p[s[i]] = max--;
				printf("%d",p[s[i]]);
			}
		}
		printf("\n");
	}
	return 0;
}

