#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int m,n;
	scanf("%d %d", &m, &n);
	int a[m][n], b[m][n], c[m][n];
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			scanf("%d",&b[i][j]);
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

