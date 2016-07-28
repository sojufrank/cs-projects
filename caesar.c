#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("please restart program\n");
        return 1;
    }
    //char* test = "hello World";
    char* test = GetString();
    int k = atoi(argv[1]);
    
    for(int i = 0; i < strlen(test); i++)
    {
        if(test[i] >= 'a' && test[i] <= 'z')
        {
            int letter = ((test[i]-'a') + k) % 26;
            printf("%c", letter + 'a');
        }
        else if(test[i] >= 'A' && test[i] <= 'Z')
        {
            int letter = ((test[i]-'A')+k) %26;
            printf("%c", letter + 'A');
        }
        else 
        {
            printf("%c", test[i]);
        }
    }
    
    //printf("your key is %i\n", k);
    printf("\n");
}