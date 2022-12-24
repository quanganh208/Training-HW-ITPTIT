#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d",&t);
	while (t--){
		long long n, a, x, b, y, cnt = 0;
		scanf("%lld %lld %lld %lld %lld", &a, &x, &b, &y, &n);
		while (n > 0){
			cnt++;
			if (cnt % x != 0) n -= a;
			if (cnt % y != 0) n -= b;
		}
		printf("%lld\n", cnt);
	}
	return 0;
}
