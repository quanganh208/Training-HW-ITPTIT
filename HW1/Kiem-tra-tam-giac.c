#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ( (a + b) > c && (a + c) > b && (b + c) > a){
		if (a==b && b==c){
			printf("DEU");
		}else if (a == b || a==c || b==c){
			printf("CAN");
		}else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
			printf("VUONG");
		}else{
			printf("THUONG");
		}
	}else{
		printf("NO.");
	}
	return 0;
}
