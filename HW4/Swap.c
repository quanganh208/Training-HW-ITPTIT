#include <stdio.h>
// IT Club PTIT Hanoi
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main() {
	// Your code goes here
	int n, m;
	scanf("%d %d", &n, &m);
	swap(&n, &m);
	printf("%d %d", n, m);
	return 0;
}

