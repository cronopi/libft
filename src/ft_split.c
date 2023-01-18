#include "../inc/libft.h"

/*ft_string_lengh()
{

}*/

static int	number_of_splits(char const *s, char c) // despues del último caracter a imprimir
{
	int i;
	int strings;

	strings = 0;
	i = 0;
	//while (s[i] == c)
	while (s[i] && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			strings++;
		}
		else
			i++;
	}
	if (i != 0 && s[i] == '\0' && s[i - 1] != c)
		strings++;
	//strings++;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		strings;
	int		i;
	int		index_strings;
	int		l;
	int		letra;

	if (!s)
		return (NULL);
	strings = number_of_splits(s, c);
	str = malloc(sizeof(char *) * (strings + 1));
	if (!str)
		return (0);
	i = 0;
	index_strings = 0;
	//while (index_strings < strings || index_strings == 0)
	while (index_strings < strings)// || index_strings == 0)
	{
		l = 0;
		letra = 0;
		//printf("la i es %i\n", i);
		while (s[i] == c)
			i++;
		while (s[i + letra] != '\0' && s[i + letra] != c)
			letra++;
//		printf("leeetra %i\n", letra);
		if (letra > 0)
			str[index_strings] = malloc(sizeof(char ) * letra + 1);
		else
			str[index_strings] = malloc(sizeof(char ) * 1);
		while (l < letra)
		{
			str[index_strings][l] = s[i];
			l++;
			i++;
		}
	//	printf("nulldir %i\n", l);
		str[index_strings][l] = '\0';
		index_strings++;
		i++;
	}
	str[index_strings] = NULL;
	return (str);
}



/* int	main(void)
{
	//char const s[] = "xxsplitxxxxthisxxxxxxforxmexxx!xxuwux";
	char const s[] = "  tripouille 42  ";
	//char const s[] = "split1xsplit2";
	char c = ' ';
	char **str = ft_split(s, c);
	int i;

	i = 0;
	while (i < number_of_splits(s, c))
	{
		printf("%s\n", str[i]);
		i++;
	}
	//check if the last character of str[1]is a null;

	//printf("%c\n", str[1][ft_strlen(str[1]) + 1]);
	if(str[i] == NULL)
		printf("NULL\n");


	if(!strcmp(str[0], "tripouille"))
		printf("OK\n");
	else{
		printf("KO\n");
		printf("%s\n", str[0]);
	}
	if(ft_strlen(str[0]) == strlen("tripouille"))
		printf("OK\n");
	else
		printf("KO\n");
	if(str[0][ft_strlen(str[0])] == '\0')
		printf("OK\n");
	else
		printf("KO\n");

	if(str[0][ft_strlen(str[0]) + 1] == '\0')
		printf("OK\n");
	if(str[1][ft_strlen(str[1]) + 1] == '\0')
		printf("OK\n");


	if(!strcmp(str[1], "42"))
		printf("OK\n");
	else{
		printf("KO\n");
		printf("%s\n", str[1]);
	}
	if(ft_strlen(str[1]) == strlen("42"))
		printf("OK\n");
	else
		printf("KO\n");
	if(str[1][ft_strlen(str[1])] == '\0')
		printf("OK\n");
	else
		printf("KO\n");


	if(str[2] == NULL)
		printf("OK\n");
	else
		printf("KO\n");
	return (0);
} */


/* 	if (!str_lengh(s))
	if (s[0] == '')
			str = malloc(sizeof(char *) * 1);
	else
		return ([s]);// [[""]]
	printf("el numero de strings es %i\n", strings);
 	if (!*s)
	{
		str = malloc (1 * sizeof(char *));
		*str = NULL;
		return (str);
	} */
