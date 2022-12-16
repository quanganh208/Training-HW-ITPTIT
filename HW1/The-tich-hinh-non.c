#include <stdio.h>
int main(){
	int h,r;
	scanf("%d %d", &h, &r);
	double v;
	v = 3.14*r*r*h/3; 
	printf("%.3lf",v);
	return 0;
}

