#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	long long  a, b, c, denta , x1, x2;
	scanf("%lld %lld %lld", &a, &b, &c);
	denta = b*b - 4*a*c;
	if (denta < 0 || ((a == 0) && (b == 0))){
		printf("null");
	}else if (denta == 0){
		x1 = - b/(2*a);
		printf("%lld", x1);
	}else{
		x1 = (-b + sqrt(denta))/(2*a);
		x2 = (-b - sqrt(denta))/(2*a);
		if (x1 > x2){
			printf("%lld\n%lld", x1, x2);
		}else{
			printf("%lld\n%lld", x2, x1);
		}
	}
	return 0;
}
