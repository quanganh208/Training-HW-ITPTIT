#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d",&t);
	while (t--){
		int n;
		scanf("%d",&n);
		int a[n][n];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				scanf("%d", &a[i][j]);
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}

