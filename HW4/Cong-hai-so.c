#include <stdio.h>
// IT Club PTIT Hanoi
long long sum (long long a, long long b){
	return a + b;
}
int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", sum(a, b));
	}
	return 0;
}

