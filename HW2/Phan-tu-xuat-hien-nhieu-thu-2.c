#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int n, max, max2, m, m2;
	int a[10000], c[1000]={0};
	scanf("%d",&n);
	for (int i =1;i <=n;i++){
		scanf("%d",&a[i]);
		c[a[i]]++;
	}
	max = 0;
	for (int i = 1; i<=n;i++){
		if (max < c[a[i]]){
			max = c[a[i]];
		}
	}
	max2 = 0;m  = 0;
	for (int i = 1; i<=n;i++){
		if (c[a[i]] > max2 && c[a[i]] < max && max2 < max){
			m = a[i];
			max2 = c[a[i]];
		}
	}
	printf("%d",m);
	return 0;
}

