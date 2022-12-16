#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
		long long a,n,temp = 0;
		scanf("%lld",&a);
		n = a;
		while (n){
			temp = temp*10 + n % 10;
			n /= 10;
		}
		if (temp == a)printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
