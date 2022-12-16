#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
		int a[1000];
		int n,total=0,cnt = 0,check;
		scanf("%lld",&n);
		for (int i = 1; i<= n;i++){
			scanf("%lld",&a[i]);
			total += a[i];
			check = 1;
			for (int j = 2; j <= sqrt(a[i]); j ++){
				if (a[i] % j == 0){
					check = 0;
					break;
				}
			}
			if (a[i] < 2) check = 0;
			if (check) cnt++;
		}
		check = 1;
		for (int i = 2; i <= sqrt(cnt);i++){
			if(cnt % i == 0){
				check = 0;
				break;
			}
		}
		if (cnt < 2) check = 0;
		int c = 1;
		for (int i = 2; i <= sqrt(total);i++){
			if(total % i == 0){
				c = 0;
				break;
			}
		}
		if (total < 2) c = 0;
		if (check == 1 && c == 1){
			printf("1");
		}else {
			printf("0");
		}
		printf("\n");
	}
	return 0;
}

