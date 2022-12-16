#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	long long m,n;
	scanf("%lld %lld", &m, &n);
	long long a[m+1][n+1], c[n+1] = {0};
	for (long long i = 0; i < m; i++){
		for (long long j = 0; j < n; j++){
			scanf("%lld",&a[i][j]);
			if (a[i][j] == 1) c[j]++;
		}
	}
	long long cnt = 0;
	for (int i; i < n;i++){
		if (c[i] > m - c[i]) cnt++;
	}
	printf("%lld",cnt);
	return 0;
}
