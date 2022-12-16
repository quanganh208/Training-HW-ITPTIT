#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	long long m,n;
	scanf("%lld %lld", &m, &n);
	long long a[m+1][n+1], cnt = 0;
	for (int i = 0; i < m; i++) a[i][n] = 0;
	for (int i = 0; i < n; i++) a[m][i] = 0;
	for (long long i = 0; i < m; i++){
		long long sum = 0;
		for (long long j = 0; j < n; j++){
			scanf("%lld",&a[i][j]);
			sum += a[i][j];
			printf("%lld ",a[i][j]);
		}
		printf("%lld\n",sum);
	}
	
	for (long long i = 0; i < n; i++){
		long long sum = 0;
		for (long long j = 0; j < m; j++){
			sum += a[j][i];
		}
		a[m][i] = sum;
	}
	for (int i = 0; i < n; i++) printf("%lld ",a[m][i]);
	return 0;
}
