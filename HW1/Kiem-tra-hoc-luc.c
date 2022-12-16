#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	float a, b, c, tb;
	scanf("%f %f %f", &a, &b, &c);
	tb =(a + b + c)/3;
	if (tb < 5){
		printf("yeu");
	}else if (tb >= 5 && tb < 6.5){
		printf("trung binh");
	}else if (tb >= 6.5 && tb < 8){
		printf("kha");
	}else{
		printf("gioi");
	}
	return 0;
}

