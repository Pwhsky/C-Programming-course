#include <stdio.h>
#include <math.h>
//Unfinished!
int main() {

  //Declare integers and floats to be used
    int i;
    float resolution = 0.1;
    
    //Declare array sizes and types
    float heltal[31]; 
    float decimaler[20];
    
    
    
    
    //Assign values to the arrays according to instructions, and print the function values
    
    printf("\n \n  [-15,15] array: \n  \n" );
    
    
    for (i = 0; i < 31;i++){
     
        
         heltal[i] = 4* pow(i - 15, 3) + 3* pow(sin((i-15)),2) - 5*(i - 15) - 7;
        
        
        printf("%.3f \t ",heltal[i]);  //Depending on the number of decimals, the formating canlook bad
    }
    
    printf("\n \n  [-1,1] array: \n  \n" );
    
    for (i = 0; i < 20;++i){
        
        decimaler[i] = 4* pow((-1 + i*resolution), 3) + 3* pow(sin(-1 + i*resolution),2) - 5*(-1 + i*resolution) - 7;
        
        
        
        
        printf("%f \t ",decimaler[i]);  
    }


printf("\n");
printf("\n");
printf("Press the any key to continue... \n");
getchar();

return 0;
}
