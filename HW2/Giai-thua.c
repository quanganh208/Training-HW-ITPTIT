#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
		unsigned long long a,s=1;
		scanf("%llu",&a);
		for (unsigned long long i = 2; i <= a; i++){
			s *= i;
		}
		printf("%llu",s);
		printf("\n");
	}
	return 0;
}

