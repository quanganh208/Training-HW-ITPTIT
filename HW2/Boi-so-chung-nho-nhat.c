#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
		long long x,y;
		scanf("%lld %lld",&x, &y);
		long long a = x, b = y;
		long long temp;
		while (b){
			temp = a % b;
			a = b;
			b = temp;
		}
		printf("%lld",x*y/a);
		printf("\n");
	}
	return 0;
}

