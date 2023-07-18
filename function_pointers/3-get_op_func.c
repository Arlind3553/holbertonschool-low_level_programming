#include "3-calc.h"
#include <stdio.h>
int(*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	i = 0;
	while (ops[i].op)
	{
		if(*s == *ops[i].op)
			return(ops[i].f);
		i++;
	}
	printf("Error/n");
	exit(99);
	return(NULL);
}
