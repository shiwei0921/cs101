#include <stdio.h>

int main(){
    int i = 12345;
    //個位數字
    int a = i%10;
    printf("%d",a);
    //千位數字
    int b = (i/1000) % 10;
    printf("%d",b);
    
    //結果
    int k = i - b*1000 - a + a*1000 + b;

    printf("%d", k);

}