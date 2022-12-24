#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi
int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		char s[10000];
		int c[300] = {0};
		scanf("%s", s);
		for (int i = 0; i < strlen(s); i++)
			if (s[i] >= 'A' && s[i] <= 'Z') c[s[i] + 32]++;
    		else if (s[i] == ' ') continue;
    		else c[s[i]]++;
    	int check = 1;
    	for (int i = 0; i < 300; i++)
    		if (c[i] > 1){
    			check = 0;
    			printf("%c %d\n", i, c[i]);
			}
		if (check) printf("-1\n");
	}
	return 0;
}

