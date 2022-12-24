#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi
int max (int a, int b){
	if (a < b) return b;
	else return a;
}
int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		char s[100];
		scanf("\n");
		gets(s);
		
		int n = strlen(s);
		int cnt = 1;
		int i = -1;
		
		while (i < n - 1){
			if (s[i+1] == 'I'){
				printf("%d", cnt++);
				i++;
			}
			else {
				int tmp = i;
				i++;
				while (i < n && s[i] == 'D') i++;
				i--;
				for (int k = cnt + i - tmp; k >= cnt; k--) printf("%d", k);
				cnt += i++ - tmp + 1;
			}
		}
		if (s[n - 1] == 'I') printf("%d", cnt);
	}
	return 0;
}

