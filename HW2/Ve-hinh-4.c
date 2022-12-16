#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int n;
	scanf("%d",&n);
	for (int i=1; i<= n;i++){
		for (int j = 0;j<i;j++){
			printf("%d",i-j);
		}
		for (int j =2;j<=n-i+1;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

