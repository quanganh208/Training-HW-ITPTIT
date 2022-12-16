#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	int a[1000];
	scanf("%d",&t);
	while (t--){
		int n;
		scanf("%d",&n);
		for (int i = 1; i<=n;i++){
			scanf("%d",&a[i]);
		}
		int check = 1;
		for (int i = 1; i <= n / 2; i++){
			if (a[i] != a[n-i+1]) check = 0;	
		}
		printf("%d\n",check);
	}
	return 0;
}

