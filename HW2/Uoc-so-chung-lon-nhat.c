#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
		long long a,b;
		scanf("%lld %lld",&a, &b);
		long long temp;
		while (b){
			temp = a % b;
			a = b;
			b = temp;
		}
		printf("%lld",a);
		printf("\n");
	}
	return 0;
}

