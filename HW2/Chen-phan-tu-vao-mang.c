#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	long long n,x,p;
	long long a[200];
	scanf("%d",&n);
	for (long long i = 1; i <= n;i++){
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&x);
	scanf("%lld",&p);
	for (long long i = p+1; i <=n+1;i++){
		long long temp = a[i];
		a[i] = x;
		x = temp;
	}
	for (long long i = 1; i <= n+1 ; i++){
		printf("%lld ",a[i]);
	}
	return 0;
}

