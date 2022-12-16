#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int m,n;
	scanf("%d %d", &m, &n);
	int a[m][n], cnt = 0;
	for (int i = 0; i < m; i++){
		int check = 1;
		for (int j = 0; j < n; j++){
			scanf("%d",&a[i][j]);
			if (j > 0 && a[i][j] != a[i][j-1]) check = 0;
		}
		if (check) cnt++;
	}
	printf("%d",cnt);
	return 0;
}

