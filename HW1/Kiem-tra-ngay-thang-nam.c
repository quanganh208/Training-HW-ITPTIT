#include <stdio.h>
#include <stdbool.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int d,m,y;
	bool check = true;
	scanf("%d %d %d", &d, &m, &y);
	if (y <= 1900 || m < 0 || m > 12 || d < 0 || d > 31){
		check = false;
	}else{
		if ( (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0) ) && m == 2){
			if (d > 29){
				check = false;
			}
		}else if (m == 2){
			if (d > 28){
				check = false;
			}
		}
		if (m == 4 || m == 6 || m == 9 || m == 11){
				if (d > 30){
					check = false;
				}
			}
	}
	if (check){
		printf("YES");
	}else{
		printf("N0");
	}
	return 0;
}
