#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int find_min(long long x, long long y){
	long long m = x;
	if (y<m){
		m = y;
	}
	return m;
}

int main() {
	// Your code goes here
	long long n,p,a,o,mid,t,m1,m2,min;
	scanf("%lld %lld %lld %lld", &n, &p, &a, &o);
	min = find_min(a,o);
	if (min+n*p < (a+o-min)){
		printf("'N0'\n%lld",(a+o-min)-(min+n*p));
		return 0;
	}else{
		mid = (n*p + a + o ) /2;
		t = (mid - a) / p;
		if (t>p){
			t = p;
		}
		m1 = abs((a + p*t)-(o+(n-t)*p));
		t = (mid - o) / p;
		if (t>p){
			t = p;
		}
		m2 = abs((o + p*t)-(a+(n-t)*p));
		min = find_min(m1,m2);
		if (min==0){
			printf("'YES'");
		}else{
			printf("'N0'\n%lld",min);
		}
		return 0;
	}
}

