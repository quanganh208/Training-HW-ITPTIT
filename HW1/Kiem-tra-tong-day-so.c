#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	long long n;
	scanf("%lld", &n);
	if (n % 2 == 0){
		printf("0");
	}else{
		long long temp;
		temp = (n - 1)/2 + 1 ;
		if (temp % 2 == 0){
			printf("0");
		}else{
			printf("1");
		}
	}
	return 0;
}

