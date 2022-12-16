#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	unsigned long long n,total,amounts;
	scanf("%d",&n);
	if (n % 2 == 0){
		n--;
	}
	amounts = (n-1)/2+1;
	total = ((1+n)*amounts)/2;
	printf("%lld",total);
	return 0;
}
