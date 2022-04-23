#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char *ft_strdup(char *src);

int main ()
{
    char *mine;
    char *notmine; 
    char teste[] = "TESTE";

    mine = ft_strdup(teste);
    notmine = strdup(teste);

    printf("Mine     :%s:\n", mine);
    printf("Original :%s:\n", notmine);

    free(mine);


    printf(" \n FAKE MULINETTEEEEEEEEEE \n");

    char    *str;
    char    *str_copy;

    str = "Test string.";
    str_copy = ft_strdup(str);
    if (strcmp(str, str_copy) != 0)
        printf("KO, string is not the same.\n");
    else
        printf("OK.\n");
    str = "";
    str_copy = ft_strdup(str);
    if (strcmp(str, str_copy) != 0)
        printf("KO, string is not the same.\n");
    else
        printf("OK.\n");
    str = "eeeeeeee vida de gado";
    str_copy = ft_strdup(str);
    if (strcmp(str, str_copy) != 0)
        printf("KO, string is not the same.\n");
    else
        printf("OK.\n");
    return (0);
    
}