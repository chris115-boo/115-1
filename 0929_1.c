#include <stdio.h>
int main()
{
    float age1;
    float age2;
    float age3;
    printf("請輸入三角形的底(cm):");
    scanf("%f",&age1);
    printf("請輸入三角形的高(cm):");
    scanf("%f",&age2);
    printf("三角形面積為：%.2f",age3=(age1*age2)/2);
    return 0;
}