#include <cs50.h>
#include <stdio.h>
#include <string.h>

char *encipher (char plaintext[], int key);

int main(int argc, string argv[])
{    
    // counting command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar not the correct number of arguments\n");
        return 1;
    }
    
    int k = atoi(argv[1]);
    
    // validating the key
    if (k == 0)
    {
        printf("Usage: ./caesar not a valid argument; has to be a number\n");
        return 1;
    }

    //the actual program        
    char plaintext[100];
    printf ("plaintext: ");
    scanf ("%s", plaintext);  
    
    int key = atoi(argv[1]);
    
    printf("ciphertext: %s\n", encipher(plaintext, key));
    return 0;
}

char *encipher (char plaintext[], int key)

{
    int length = strlen(plaintext);
    char enciphered[100];
    
    for (int i = 0; i < length; i++)
    {                                                
        if((int)plaintext[i] >= 97 && (int)plaintext[i] <= 122)
        {
            if((int)plaintext[i] + key >= 123)
            {                              
                int diff = ((int)plaintext[i] + key) - 122;
                int remainder = diff % 26;
                int add = 96 + remainder;

                enciphered[i] = add;
                
                printf("if1\n");
            }
            else
            {
                enciphered[i] = plaintext[i] + key;
                printf("else1\n");
            }
        }
        
        if((int)plaintext[i] >= 65 && (int)plaintext[i] <= 90)
        {
            if((int)plaintext[i] + key >= 90)
            {
                int diff = ((int)plaintext[i] + key) - 90;
                int remainder = diff % 26;
                int add = 65 + remainder;

                enciphered[i] = add;
                
                printf("if2\n");
            }
            else
            {
                enciphered[i] = plaintext[i] + key;
                printf("else2\n");
            }
        }
        
        else
        {
        enciphered[i] = plaintext[i];
        printf("else else\n");
        }
        
        printf("Enciphered: %i %i %c\n",(int)plaintext[i], (int)enciphered[i], enciphered[i]);

    }
    memcpy(plaintext, enciphered, strlen(enciphered) + 1);
    return plaintext;
}