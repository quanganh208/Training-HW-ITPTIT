#include <stdio.h>
// IT Club PTIT Hanoi
int a[1000000], c[1000000]={0};
int main() {
	// Your code goes here
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int end = 0, start = 0, cnt = 0, max = 0, temp = 0;
	while (end < n){
		c[a[end]]++;
		if (c[a[end]] < 2){
			cnt++;
		}else{
			if (max < cnt){
				max = cnt;
			}
			for (int j = temp; j < end;j++){
				if (a[j] == a[end]){
					start = j+1;
					temp = start;
					break;
				}
			}
			cnt = end - start + 1;
			c[a[end]]--;
		}
		end++;
	}
	if (max < cnt){
		max = cnt;
	}
	printf("%d",max);
	return 0;
}

