#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, a[100], cnt = 0;
		scanf("%d",&n);
		for (int i = 0; i < n; i++){
			scanf("%d",&a[i]);	
			if (pow(ceil(sqrt(a[i])),2) == a[i]) cnt++;
		}
		printf("%lld",cnt);
		printf("\n");
	}
	return 0;
}
