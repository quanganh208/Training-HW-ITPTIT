#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n,cnt = 0;
		long long a[10000];
		scanf("%lld",&n);
		for (long long i = 1; i <= n; i++){
			if (n % i == 0){
				cnt++;
				a[cnt] = i;
			}
		}
		printf("%lld\n",cnt);
		for (int i = 1;i <= cnt; i++){
			printf("%lld ",a[i]);
		}
		printf("\n");
	}
	return 0;
}

