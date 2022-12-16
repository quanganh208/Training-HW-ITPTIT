#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	double a, b, d;
	long long temp;
	scanf("%lf %lf", &a, &b);
	d = a/b;
	long long s = 0;
	temp = d*100000 - (long long)d*100000;
	s = s + temp % 10;
	temp = temp / 10;
	s = s + temp % 10;
	temp = temp / 10;
	s = s + temp % 10;
	temp = temp / 10;
	s = s + temp % 10;
	temp = temp / 10;
	s = s + temp % 10;
	temp = temp / 10;
	printf("%lld",s);
	return 0;
}

