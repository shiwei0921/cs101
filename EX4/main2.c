#include <stdio.h>

// int main() {
//     double PI = 0;
//     double sum = 0;
//     int x;

//     for (int i = 0; i < 1000000; i++) {
//         double Odd = 2.0 * i + 1.0; // 生成分母（奇數）
//         if (i % 2 == 0) { // 偶數索引：加
//             sum += 4.0 / Odd;
//         } else { // 奇數索引：減
//             sum -= 4.0 / Odd;
//         }
//     }

//     // PI = sum;

//     // 輸出計算結果
//     printf("PI = %.5f\n", PI);

//     return 0;
// }


int main() {
    double pi = 4.0f;
    int flag = 1;
    long ipi = 0;
    int x = 0;

    for(int i = 3; i < 1000000; i+=2){
        if(flag == 0){
            pi += (4.0/i);
            flag++;
        }
        else {
            pi -= (4.0/i);
            flag--;
        }
        ipi = pi*100000;
        if(ipi == 314159){
            x = i;
            break;
        }
    }
    printf("%d %.5f", x, pi);
    return 0;
}

