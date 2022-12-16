#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int m, n, i ,j;
	int a[105][105], c[105][105];
	scanf("%d %d", &m,&n);
	
	for (i = 0; i < m+5; i++){
		for (j = 0; j < n+5; j++){
			a[i][j] = 0;
			c[i][j] = 0;
		}
	}
	
	for (i = 1; i <= m; i++){
		for (j = 1; j <= n; j++){
			if (((i-1)*n + j) % 6 == 0 || ((i-1)*n + j) % 8 == 0) a[i][j] = 1;
			else a[i][j] = 0;
		}
	}
	a[1][1] = 1;
	
	for (i = 1; i <= m; i++){
		for (j = 1; j <= n; j++){
			c[i][j] = a[i][j];
			if (a[i][j]){
				if (a[i-1][j-1]){
					c[i][j] = 0;
					c[i-1][j-1] = 0;
				}
				if (a[i-1][j]){
					c[i][j] = 0;
					c[i-1][j] = 0;
				}
				if (a[i-1][j+1]){
					c[i][j] = 0;
					c[i-1][j+1] = 0;
				}
				if (a[i][j-1]){
					c[i][j] = 0;
					c[i][j-1] = 0;
				}
				if (a[i][j+1]){
					c[i][j] = 0;
					c[i][j+1] = 0;
				}
				if (a[i+1][j-1]){
					c[i][j] = 0;
					c[i+1][j-1] = 0;
				}
				if (a[i+1][j]){
					c[i][j] = 0;
					c[i+1][j] = 0;
				}
				if (a[i+1][j+1]){
					c[i][j] = 0;
					c[i+1][j+1] = 0;
				}
			}
		}
	}
	int cnt = 0;
	for (i = 1; i <= m; i++){
		for (j = 1; j <= n; j++){
			if (c[i][j] == 1) cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

