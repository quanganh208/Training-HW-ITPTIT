#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int a, n, total;
	scanf("%d %d", &a, &n);
	if (a / n > 0){
		printf("0");
	}else{
		total = (1+a)*a/2;
		if (total == n){
			printf("1");
		}else{
			printf("0");
		}
	}
	return 0;
}
