#include <stdio.h>
// IT Club PTIT Hanoi
int n, a[100][100];
int check_row(int x){ //check hang xem co so 1 khong
	for (int i = 0; i < n; i++){
		if (a[x][i] == 1) return 1;
	}
	return 0;
}

int check_column(int x){ //check cot xem co so 1 khong
	for (int i = 0; i < n; i++){
		if (a[i][x] == 1) return 1;
	}
	return 0;
}
int main() {
	// Your code goes here
	int x, y;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d",&a[i][j]);
			if (a[i][j] == 0){
				x = i;
				y = j;
			}
		}
	}
	if (check_row(x) || (check_column(y))) printf("Yes");
	else printf("No");
	return 0;
}

