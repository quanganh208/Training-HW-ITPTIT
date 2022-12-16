#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
			long long a[1000];
			long long n;
			scanf("%lld",&n);
			for (long long i = 1; i <= n;i++){
				scanf("%lld",&a[i]);
				if (a[i]< 0) a[i] = 0;
			}
			for (long long i = 1; i <= n;i++){
				printf("%lld ",a[i]);
			}
		printf("\n");
	}
	return 0;
}

