#include <stdio.h>
int main() {
	// Your code goes here
	long long n;
	scanf("%lld", &n);
	long long a[n+15][n+15], b[n+15][n+15];
	for (long long i = 0; i < n; i++){
		for (long long j = 0; j < n; j++){
			scanf("%lld",&a[i][j]);
		}
	}

	for (long long i = 0; i < n; i++){
		for (long long j = 0; j < n; j++){
			scanf("%lld",&b[i][j]);
		}
	}
	for (long long i = 0; i < n; i++){
		for (long long j = 0; j < n; j++){
			long long s = 0;
			for (long long k = 0; k < n; k++){
				s += a[i][k] * b[k][j];
			}
			printf("%lld ",s);
		}
		printf("\n");
	}
	return 0;
}

