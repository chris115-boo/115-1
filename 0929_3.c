#include <stdio.h>
int main()
{
    int a=5;////學生的門禁卡權限///0101
    int b=1<<2;
    int c=a&b;
    int d=a&c;
    int e=1<<3;
    int f=a&e;
    printf("停車場的權限:%d\n",c);
    printf("學生有無停車場權限:%d\n",d);
    printf("學生有無老師辦公室權限:%d\n",f);
    return 0;
}