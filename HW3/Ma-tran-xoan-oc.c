#include <stdio.h>
int main() {
	// Your code goes here
	int n;
	scanf("%lld", &n);
	int a[n][n];
	for (int i = 0; i < n;i++){
		for (int j = 0; j < n;j++){
			a[i][j] = 0;
		}
	}
	
	int cnt = 1, i = 0, j = 0, check = 1;
	while (cnt <= n*n){
		if (check == 1 && a[i][j] == 0){
			a[i][j++] = cnt++;
			if (j == n || a[i][j] != 0){
				check = 2;
				i++;
				j--;
			}
			continue;
		}
		
		if (check == 2 && a[i][j] == 0){
			a[i++][j] = cnt++;
			if (i == n || a[i][j] != 0){
				check = 3;
				i--;
				j--;
			}
			continue;
		}
		
		if (check == 3 && a[i][j] == 0){
			a[i][j--] = cnt++;
			if (j == -1 || a[i][j] != 0){
				check = 4;
				j++;
				i--;
			}
			continue;
		}
		
		if (check == 4 && a[i][j] == 0){
			a[i--][j] = cnt++;
			if (a[i][j] !=0){
				check = 1;
				i++;
				j++;
			}
		}
	}
	
	for (int i = 0; i < n;i++){
		for (int j = 0; j < n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

