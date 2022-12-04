#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
  char text[10] = "Gothenburg";
  char *my_pointer = text;
  int a = 0;
  int choice;
  
  int length = sizeof(text)-1;
   
  
   
   while (choice != 3) {
       
     //Skapa meny  
     printf("Pekaren pekat på %c, välj en operation:\n",*(my_pointer+a));
     printf("1) Addera 1.\n");
     printf("2) subtrahera 1.\n");
     printf("3) Avsluta programmet.\n");
     //Ta input från användare  
     scanf("%i",&choice);

       //Switch-sats för olika utfall
       switch(choice) {
           
        case 1:
        a = a + 1;
        break;
        
        case 2:
        a = a - 1;
        break;
        
        case 3:
        break;
        
        default:
        printf("Error: Vänligen ange 1-3 \n");
    
       }
        if (a >= length) {
            a = length ;
            printf("Det finns inga mer karaktärer! \n \n");
            
        }
   } 
   
printf("Programmet är avslutat, slutvärdet = %c \n",*(my_pointer+a));
return 0;
}
