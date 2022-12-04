#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
   int a = 0;
    int choice;
  
   
  
   
   while (choice != 4) {
       
     //Skapa meny  
     printf("Talet är %d, välj en operation:\n",a);
     printf("1) Addera 1.\n");
     printf("2) Multiplicera med 2.\n");
     printf("3) Subtrahera 3.\n");
     printf("4) Avsluta programmet.\n");
       
     //Ta input från användare  
     scanf("%i",&choice);
       //Switch-sats för olika utfall
       switch(choice) {
           
        case 1:
        a = a + 1;
        break;
        
        case 2:
        a = a*2;
        break;
        
        case 3:
        a = a - 3;
        break;
        
        case 4:
        break;
        
        default:
        printf("Error: Vänligen ange 1-4 \n");
    
       }
   } 
   
printf("Programmet är avslutat, slutvärdet = %d \n",a);


printf("\n");
printf("\n");
printf("Press the any key to continue... \n");
getchar();

return 0;
}
