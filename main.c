#include <stdio.h>
int main() {
    float x, y;
    printf("Введіть координати x, y:");
    scanf("%f %f", &x, &y);
    if ((x >= -1 && x <= 0 && y >= 0 && y <= 1 )|| (x >= 0 && x <= 1 && y >= 0 && y <=1 && x*x+y*y<=1 )){
        printf("Точка належить області.\n");
    }else{
        printf("Точка не належить області.\n");
    }
    return 0;
}