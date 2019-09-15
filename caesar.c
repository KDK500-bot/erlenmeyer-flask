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
        printf("Usage: ./caesar key not a valid argument; has to be a number\n");
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

        if((int)plaintext >= 65 && (int)plaintext <= 90)
        {
            if((int)plaintext + key >= 90)
            {
                int add = key % 26;
                int remainder = 65 + add;

                enciphered[i] = remainder;
            }
            else
            {
                enciphered[i] = plaintext[i] + key;
            }
        }
        if((int)plaintext >= 97 && (int)plaintext <= 122)
        {
            if((int)plaintext + key >= 122)
            {
                int add = key % 26;
                printf("%i", add);
                int remainder = 97 + add;

                enciphered[i] = remainder;
            }
            else
            {
                enciphered[i] = plaintext[i] + (int)key;
            }
        else
        {
        enciphered[i] = plaintext[i];
        }
        
        printf("Enciphered: %i %i %c\n",(int)plaintext[i], (int)enciphered[i], enciphered[i]);

    }
    memcpy(plaintext, enciphered, strlen(enciphered) + 1);
    return plaintext;
}