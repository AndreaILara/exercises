#include <stdio.h>

int	main(void)
{
	int total;
	char str[10] = "Hola Mundo";

	total = ft_strlen(str);
	printf("The total number of letters in the word %s are %d.\n", str, total);
	return (0);
}