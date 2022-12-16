#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n,s=1;
		scanf("%lld",&n);
		for (long long i = 2;i <= sqrt(n);i++){
			if (n % i == 0){
				long long q = n / i;
				if (q==i){
					s += i;
				}else{
					s += i + n/i;
				}
			}
		}
		if (s==n) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}

