#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int n;
	scanf("%d", &n);
	int a[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = n-1; j >= 0; j--){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}

