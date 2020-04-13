#include "shellib.h"
/**
* sp - split function.
* @st : first string
* @dec : delims
* Return: splited string
*/
char **sp(char* st, char *dec)
{
	char *str;
	char *copy;
	size_t l ;
	int i = 0;
	l = strlen(st);

	char **ch = malloc(sizeof(char *) *l +1);
	
	copy = strdup(st);
	
	str = strtok(copy, dec);
	while (str != NULL)
	{
		ch[i] = strdup(str);
		str = strtok(NULL, dec);
		i++;
		free(str);
	}
free(copy);

return(ch);
}
