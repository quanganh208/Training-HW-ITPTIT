#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	long long n,a[100000],c[100000]={0};
	for (long long i =1; i <= 100000; i++){
		c[i] = 0;
	}
	scanf("%lld",&n);
	for (long long i = 1; i <=n;i++){
		scanf("%lld",&a[i]);
		c[a[i]]++;
	}
	long long result = 0;
	for (long long i =1; i <= 100000; i++){
		if (c[i]){
		result += c[i]*(c[i]-1)/2;
		}
	}
	printf("%lld",result);
	return 0;
}

