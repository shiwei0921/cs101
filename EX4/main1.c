#include <stdio.h>

int main() {
    int n = 7;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n ; j++) {
            if (j <= n - i) {
                printf(" "); // 輸出前面的空白部分
            } else {
                printf("%d ", i); // 輸出數字部分
            }
        }
        printf("\n");
    }
    return 0;
}



