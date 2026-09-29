#include <stdio.h>
int main()
{
    int c=13;///1101
    int livingroom=9;
    int bedroom=5;
    int kitchen=2;
    printf("目前客廳設備:%d\n",c&livingroom);
    printf("目前臥室設備:%d\n",c&bedroom);
    printf("目前廚房設備:%d\n",c&kitchen);
    printf("廚房切換後目前設備狀態:%d\n",c^kitchen);
    return 0;
}