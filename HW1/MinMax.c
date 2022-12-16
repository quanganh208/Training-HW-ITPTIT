#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int find_max(int x, int y){
	int max;
	max = (abs(x-y) + x + y )/2;
	return max;
}
int main() {
	// Your code goes here
	int a, b, c, m, m1, max_1, max_2, min_1, min_2, temp;
	scanf("%d %d %d", &a, &b, &c);
	max_1 = find_max(a, b);
	min_1 = a + b - max_1;
	max_2 = find_max(b, c);
	min_2 = b + c - max_2;
	m = find_max(max_1, max_2);
	temp = find_max(min_1, min_2);
	m1 = min_1 + min_2 - temp;
	printf("%d %d", m, m1);	
	return 0;
}

