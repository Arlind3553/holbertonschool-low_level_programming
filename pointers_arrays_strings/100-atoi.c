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
  int result;
  int puiss;

  result = 0;
  puiss = 1;
  while (('-' == (*s)) || ((*s) == '+'))
  {
      if (*s == '-')
        puiss = puiss * -1;
      s++;
  }
  while ((*s >= '0') && (*s <= '9'))
  {
      result = (result * 10) + ((*s) - '0');
      s++;
  }
  return (result * puiss);
}


