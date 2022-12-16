#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int a, m;
	scanf("%d", &a);
	if (a < 50){
		m = a*600;
	}else if (a >=50 && a < 150){
		m = 50*600 + (a-50)*400;
	}else{
		m = 50*600 + 100*400 + (a-150)*200;
	}
	printf("%d",m);
	return 0;  
}
