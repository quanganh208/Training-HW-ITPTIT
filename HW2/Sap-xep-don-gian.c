#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int n,temp;
	int a[1000];
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n - 1; i++){
		for (int j = i+1; j < n;j++){
			if (a[i] > a[j]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++){
		printf("%d ",a[i]);
	}
	return 0;
}

