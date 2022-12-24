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
		char s1[10000], s2[10000], b[300] = {0};
		scanf("%s", s1);
		scanf("%s", s2);
		int check = 0;
		for (int i = 0; i < strlen(s1); i++){
			int c = 1;
			for (int j = 0; j < strlen(s2); j++){
				if (s1[i] == s2[j]){
					c = 0;
					break;
				};
			}
			if (c && b[s1[i]] == 0){
				check = 1;
				b[s1[i]] = 1;
				printf("%c", s1[i]);
			}
		}
		
		for (int i = 0; i < strlen(s2); i++){
			int c = 1;
			for (int j = 0; j < strlen(s1); j++){
				if (s2[i] == s1[j]){
					c = 0;
					break;
				};
			}
			if (c && b[s2[i]] == 0){
				check = 1;
				b[s2[i]] = 1;
				printf("%c", s2[i]);
			}
		}
		if (check == 0) printf("-1");
		printf("\n");
	}
	return 0;
}

