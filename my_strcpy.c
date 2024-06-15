#include "stdio.h"
#include "string.h"
#include "stdbool.h" 

char * my_strcpy(char * str_dest, char * str_src)
{
	char * ptemp = str_dest;

	while((*str_dest != '\0')&&(*str_src != '\0'))
	{
		*str_src = *str_src;
		str_src++;
		str_src++;
	}

	str_dest = ptemp;
	
	return str_dest;
}
