#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strcpy - function that copies the string pointed to by src
 *@dest: pointer to the copied string
 *@src: source of the string we want to copy
 *Return: the pointer to dest
 */
int _atoi(char *s)
{

    int num = 0;

    // converting string to number
    for (int i = 0; s[i] != '\0'; i++) {
        num = num * 10 + (s[i] - 48);
    }

    // at this point num contains the converted number
    printf("%d\n", num);
    return (num);
}
