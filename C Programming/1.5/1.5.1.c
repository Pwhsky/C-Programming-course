#include <stdio.h>

int main() {

void dubblera(int *x){
    *x = *x * 2;
}

int main()
{
    int input;
    
    int *x = &input ;
    
 printf("Enter your input: \n");
 scanf("%d",&input);
 
 dubblera(x);
 
 printf("your doubled number is %d",input);
 
 


printf("\n");
printf("\n");
printf("Press the any key to continue... \n");
getchar();

return 0;
}
