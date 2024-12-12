#include <stdio.h>

int main() {
    for (int i = 1; i <= 81; i++) {
        int y = (i - 1) / 9 + 1; // 計算目前的列數
        int x = (i - 1) % 9 + 1; // 計算目前的行數
        
        printf("%d*%d=%d\t", y, x, y * x);
        
        if (x == 9) { // 當行數到 9 時，換行
            printf("\n");
        }
    }
    return 0;
}
