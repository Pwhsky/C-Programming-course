
#include <stdlib.h>
#include <stdio.h>

int dubblera(int x) {
    x = x*2;
    return x;
}

int main()
{
    int input, output;
    printf("Type in a number to be doubled: ");
    scanf("%d", &input);
    printf("The input is %d \n",input);
    
    output = dubblera(input); 
    
    printf("The double of %d is %d \n",input,output);
    
    
    return 0;
}

