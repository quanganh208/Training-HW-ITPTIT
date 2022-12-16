#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
		long long a, b, c;
		scanf("%lld %lld %lld",&a, &b, &c);
		double result = (float)a*b*c/100;
		printf("%g",result);
		printf("\n");
	}
	return 0;
}

