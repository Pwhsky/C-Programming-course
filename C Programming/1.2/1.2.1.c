#include <stdio.h>
int main() {

  int count = 0;
  int c;
    printf("input an integer: \n");
    scanf("%d", &c); 
    
    c = c * 2;
    
    while(c!=0){
        c= c/10;
        count ++;
    }
    
    printf("the number of digits is: %d \n",count);
    

    printf("\n");
    printf("\n");
    printf("Press the any key to continue... \n");
    getchar();

    return 0;
}
