#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
		int a,b,cnt = 0;
		scanf("%d %d",&a, &b);
		for (int i = a; i <= b; i++){
			if (i < 2)continue;
			int check = 1;
			for (int j = 2; j <= sqrt(i);j++){
				if (i % j == 0){
					check = 0;
					break;
				}
			}
			if (check)cnt++;
		}
		printf("%d",cnt);
		printf("\n");
	}
	return 0;
}

