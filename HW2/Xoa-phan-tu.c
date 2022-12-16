#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int n, k;
	int a[10000];
	scanf("%d",&n);
	for (int i = 0; i < n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	int check = 0;
	for (int i = 0; i < n;i++){
		if (a[i] % k == 0){
			for (int j = i; j < n-1;j++){
				a[j] = a[j+1];
			}
			check = 1;
			break;
		}
	}
	if (check){
		for (int i = 0; i < n-1; i++){
			printf("%d ",a[i]);
		}
	}else printf("-1");
	return 0;
}

