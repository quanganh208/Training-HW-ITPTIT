#include <stdio.h>
// IT Club PTIT Hanoi
int main() {
	// Your code goes here
	int a, b, c, d, max;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = a;
	if (max < b){
		max = b;
	}
	if (max < c){
		max = c;
	}
	if (max < d){
		max = d;
	}
	printf("%d", max);
	return 0;
}

