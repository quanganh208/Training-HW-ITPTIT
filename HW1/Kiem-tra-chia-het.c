#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	unsigned long long a, b, c;
	scanf("%llu %llu %llu", &a, &b, &c);
	if (a % b == 0 && a % c == 0){
		printf("YES");
	}else{
		printf("N0");
	}
	return 0;
}
