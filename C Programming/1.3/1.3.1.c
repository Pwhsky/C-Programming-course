#include <stdio.h>
int main() {

    unsigned i;
    int n;
printf("Convert decimal to binary: :\n");
scanf("%d",&n);

    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");


printf("\n");
printf("\n");
printf("Press the any key to continue... \n");
getchar();

return 0;
}
