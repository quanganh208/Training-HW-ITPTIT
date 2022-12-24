#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int n, cnt = 0;
	scanf("%d", &n);
	char s[1000];
	int c[1000];
	scanf("%s", s);
	for (int i = 0; i < n; i++)
		if (s[i] == '0' || s[i] == '5'){
			c[cnt++] = i;
		}
	int ans = 0;
	for (int i = 0; i < cnt; i++){
		int count = 1;
		for (int j = c[i] - 1; j >= 0; j--)
			if (s[j] != '0') count++;
		ans += count;
	}
	printf("%d", ans);
	return 0;
}

