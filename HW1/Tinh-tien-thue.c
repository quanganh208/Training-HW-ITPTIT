#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int a,t;
	scanf("%d",&a);
	if (a == 0){
		printf("0");
		return 0;
	}
	if (a < 10){
		t = a*1;
	}else if (a >= 10 && a < 20){
		t = a*3;
	}else{
		t = a*5;
	}
	float f = (float)t/100;
	if (t % 100 == 0){
		printf("%.0f",f);	
	}else if (t % 10 == 0){
		printf("%.1f",f);
	}else{
		printf("%.2f",f);
	}
	return 0;
}

