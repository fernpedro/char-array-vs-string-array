#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    /*
       Show that these two strings are equivalent
       char str1[] = {'h','e','l','l','o'};
       char str2[] = "hello";
    */

    char str1[6] = {'h','e','l','l','o'};
    char *strPtr1;
    strPtr1 = str1;
    
    int i = 0;
    for(i=0; strPtr1[i] != '\0'; ++i)
    {
        printf("%c", *(strPtr1+i));
    }

    printf("\n");
    // Maybe we are printing unprinting characters ASCII code 0-31?

    char str2[6] = "hello";
    char *strPtr2;
    strPtr2 = str2;
    
    int j = 0;
    for(j=0; strPtr2[j] != '\0'; ++j)
    {
        printf("%c", *(strPtr2+j));
    }
  
    printf("\n");
    
    return 0;
}