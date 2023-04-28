#include <stdio.h>

int main() {
    int a = 0x1234abcd;
    char *p;
    p = &a;
    char *temp;
    *temp = *(p);
    *p = *(p+1);
    *(p+1) = *temp;
    *temp = *(p+2);
    *(p+2) = *(p+3);
    *(p+3) = *temp;
    printf("0x%x",a);
    

    return 0;
}
