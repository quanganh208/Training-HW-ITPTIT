#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	long long a[1000];
	scanf("%d",&t);
	while(t--){
		long long n,cnt = 0;
		scanf("%lld",&n);
		while (n){
			cnt++;
			a[cnt] = n % 2;
			n = n/2;
		}
		for (long long i = cnt; i > 0;i--){
			printf("%lld",a[i]);
		}
		printf("\n");
	}
	return 0;
}

