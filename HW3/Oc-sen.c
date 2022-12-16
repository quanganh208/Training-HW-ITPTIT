#include <stdio.h>
#include <math.h>
int a[2][3];
double area(int xA, int yA, int xB, int yB, int xC, int yC){
	return 0.5 * fabs(xA * (yB - yC) + xB * (yC - yA) + xC * (yA - yB));
}
int main(){
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			scanf("%d",&a[j][i]);
		}
	}
	int t;
	scanf("%d",&t);
	while (t--){
		int x, y;
		scanf("%d %d",&x, &y);
		double area_1 = area(x,y,a[0][1],a[1][1],a[0][2],a[1][2]);
		double area_2 = area(a[0][0],a[1][0],x,y,a[0][2],a[1][2]);
		double area_3 = area(a[0][0],a[1][0],a[0][1],a[1][1],x,y);
		double area_4 = area(a[0][0],a[1][0],a[0][1],a[1][1],a[0][2],a[1][2]);
		double check = (area_1 + area_2 + area_3) - area_4;
		if (check > 0) printf("NO\n");
		else printf("YES\n");
	}
}
