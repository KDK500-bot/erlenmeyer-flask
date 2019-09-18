#include <stdio.h>
#include <string.h>

int main(void)
{
    char amino[100];
    printf("Aminoacidsequence: ");
    scanf("%[^\n]", amino);
    
    int length = strlen(amino);
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
    }
    int true_length = length - space;   
    int calculus = basic * 100 / (true_length);
    
    printf("The aminoacidsequence contains %i aminoacids.\n", true_length);
    printf("Basic aminoacids: %i\n", basic);
    printf("%i%% of the sequence is basic.\n", calculus);
}