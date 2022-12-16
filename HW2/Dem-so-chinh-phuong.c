#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
		long long a, b, cnt = 0;
		scanf("%lld %lld",&a, &b);
		for (long long i = a; i <= b; i++){
			if (pow(ceil(sqrt(i)),2) == i) cnt++;
		}
		printf("%lld",cnt);
		printf("\n");
	}
	return 0;
}
