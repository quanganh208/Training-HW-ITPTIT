#include <stdio.h>
#include <string.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		char a[10000], b[10000];
		int res[100000] = {0};
		scanf("%s", a);
		scanf("%s", b);
		int max = strlen(a);
		if (max < strlen(b)) max = strlen(b);
		char tmp[1005] = "";
		for (int i = 0; i < max - strlen(a); i++) tmp[i] = '0';
		strcat(tmp, a);
		strcpy(a, tmp);
		char temp[1005] = "";
		for (int i = 0; i < max - strlen(b); i++) temp[i] = '0';
		strcat(temp, b);
		strcpy(b, temp);
		
		int nho = 0;
		int t = max - 1;
	    for (int i = max - 1; i >= 0; i--){
	    	int s1 = a[i] - 48, s2 = b[i] - 48;
	    	int tam = s1 + s2 + nho;
	    	if (tam >= 10) nho = 1;
	    	else nho = 0;
			res[t--] = tam % 10;
	    	
		}
		if (nho) printf("1");
		for (int i = 0; i < max; i++) printf("%d", res[i]);
		printf("\n");
	}
	return 0;
}

