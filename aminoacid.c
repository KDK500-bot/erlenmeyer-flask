#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
int main(void)
{
        char amino[20];
        printf("Aminoacidsequence: ");
        
        //Einlesen
        for (int i = 0 ; i < 20; i++){

            char tmp; 
            scanf("%[^\n]",&tmp);
            amino[i] = tmp;

        }
        int length = strlen(amino);
        printf("Laenge: %i \n",length);
      

        //Ausgabe
            char ausgabe; 
        for (int i = 0 ; i < length; i++){
            ausgabe = ausgabe + amino[i];
            
        printf("%i : Ausgabe: %c \n",i,ausgabe);
        }    

        sleep(10);
        
        int basic = 0;
        int space = 0;
    
        

        for (int i = 0; i < length; i++)
        {
            if((int)amino[i] == 72 || (int)amino[i] == 75 || (int)amino[i] == 82)
            {
                basic++;
            }
            else if((int)amino[i] == 32)
            {
                space++;
            }
            else if(!isalpha(amino[i]) || !isupper(amino[i]))
            {
                printf("Please check your input! \n");
                return 0;
            }
        }
        int true_length = length - space;   
        int calculus = basic * 100 / (true_length);

        printf("The aminoacidsequence contains %i aminoacids.\n", true_length);
        printf("Basic aminoacids: %i\n", basic);
        printf("%i%% of the sequence is basic.\n", calculus);
        sleep(60);
}
