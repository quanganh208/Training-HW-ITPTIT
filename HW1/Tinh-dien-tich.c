#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	long long t;
	scanf("%lld\n", &t);
	if (t == 1){
		long long r;
		double s;
		scanf("%lld", &r);
		s = r*r*3.14;
		printf("%.2lf",s);
	}else if (t == 2){
		long long a, b;
		double s;
		scanf("%lld %lld", &a, &b);
		s = a*b;
		long long temp = (long long)s;
		if (s - temp == 0){
			printf("%lld",temp);
		}else{
			printf("%.2lf",s);
		}
	}else{
		long long a, b, c;
		double s, p;
		scanf("%lld %lld %lld", &a, &b, &c);
		if (a + b > c && a + c > b && b + c > a){
			p = ((double)a + (double)b + (double)c)/2;
			s = sqrt(p*(p-a)*(p-b)*(p-c));
			long long temp = (long long)s;
			if (s - temp == 0){
				printf("%lld",temp);
			}else{
				printf("%.2lf",s);
			}
		}else{
			printf("Nope");
		}
	}
	return 0;
}

