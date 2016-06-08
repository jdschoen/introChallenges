#include <stdio.h>
#include <string.h>


int worthless(int x)
{
    char buff[250];
    char buff2[250];

    x = 0;
    return x;
}

int main(void)
{
    int x = 0;
    int pass = worthless(x);
    char buff[16];


    printf("Please enter the password:\n");
    gets(buff);

    if(strcmp(buff, "P@33W0rd"))
    {
        printf ("\nPassword Incorrect\n");
    }
    else
    {
        printf ("\nCorrect Password\n");
        pass = 1;
    }

    if(pass)
    {
       printf ("\nAccess granted!\n");
       printf ("\nHere is your flag:\n");
       printf("5718b65f0e2ff3a531433b756de9da5026e005cf\n");
    }

    return 0;
}
