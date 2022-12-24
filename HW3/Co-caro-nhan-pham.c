#include <stdio.h>

int a[1005][1005];
int n, k;
// 1 = 'X', 0 = 'O'
int max(int a, int b){
	if (a < b) return b;
	else return a;
}
int horizontalX[1005][1005], verticalX[1005][1005], horizontalO[1005][1005], verticalO[1005][1005];
void run_test_case() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            horizontalX[i][j] = 1;
            verticalX[i][j] = 1;
            horizontalO[i][j] = 1;
            verticalO[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0) {
                verticalX[i][j] = horizontalX[i][j] = 0;
            } 
            else {
                horizontalX[i][j] = (j == 0) ? 1 : horizontalX[i][j-1] + 1;
                verticalX[i][j] = (i == 0) ? 1 : verticalX[i-1][j] + 1;
            }

            if (a[i][j] == 1) {
                verticalO[i][j] = horizontalO[i][j] = 0;
            } 
            else {
                horizontalO[i][j] = (j == 0) ? 1 : horizontalO[i][j-1] + 1;
                verticalO[i][j] = (i == 0) ? 1 : verticalO[i-1][j] + 1;
            }
        }
    }
    
    int cntX = 0, cntO = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cntX = max(cntX, max(horizontalX[i][j], verticalX[i][j]));
            cntO = max(cntO, max(horizontalO[i][j], verticalO[i][j]));
        }
    }

    if (cntX >= k && cntO >= k) {
        printf("Draw\n");
        return;
    }
    if (cntX >= k) {
        printf("Game de\n");
        return;
    }
    if (cntO >= k) {
        printf("Chap thoi\n");
        return;
    }
    printf("Draw\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--){
        run_test_case();
	}
}
