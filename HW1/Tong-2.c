#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	unsigned long long n, total;
	scanf("%ld", &n);
	total = n*(n+1)*(2*n+1)/6;
	printf("%lli", total);
	return 0;
}

