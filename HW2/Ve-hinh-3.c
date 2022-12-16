#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		for (int j = 1; j < n-i; j++){
			printf(" ");
		}
		if (i == 0){
			printf("*");
		}else if (i == n-1){
			for (int j = 1;j <= n; j++){
				printf("* ");
			}
		}else{
			printf("*");
			for (int j = 1; j <=(i-1)*2+1;j++){
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}

