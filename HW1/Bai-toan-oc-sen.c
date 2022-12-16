#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	long long a, b, v;
	scanf("%lld %lld %lld", &a, &b, &v);
	if (v == a){
		printf("1");
	}else if ((v-b) % (a-b)==0){
		printf("%lld", (v-b) / (a-b));
	} else {
		printf("%lld", (v-b) / (a-b) + 1);
	}
	return 0;
}

