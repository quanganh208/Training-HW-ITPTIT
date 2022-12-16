#include <stdio.h>
// IT Club PTIT Hanoi
int c[105] = {0};
int main() {
	// Your code goes here
	int m, n;
	scanf("%d %d", &m, &n);
	int a[m][n];
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			scanf("%d",&a[i][j]);
			c[a[i][j]]++;
		}
	}
	int max = 0, vt = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			
			if (max < c[a[i][j]]){
				max = c[a[i][j]];
				vt = a[i][j];
				c[a[i][j]] = 0;
			}else if (max == c[a[i][j]] && vt < a[i][j]){
				vt = a[i][j];
				c[a[i][j]] = 0;
			}
		}
	}
	printf("%d %d",max,vt);
	return 0;
}

