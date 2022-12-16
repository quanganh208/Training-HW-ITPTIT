#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int x, y;
	int a[200], b[200];
	scanf("%d",&x);
	for (int i = 0; i < x;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&y);
	for (int i = 0; i < y;i++){
		scanf("%d",&b[i]);
	}
	int check, c = 1;
	for (int i = 0; i < x; i++){
		check = 1;
		for (int j = 0; j < y; j++){
			if (a[i]==b[j]){
				check = 0;
				break;
			}
		}
		if (check){
			printf("%d ", a[i]);
			c = 0;
		}
	}
	if (c){
		printf("-1");
	}
	return 0;
}

