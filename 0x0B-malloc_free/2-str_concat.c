# include <stdlib.h>
# include <string.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: A pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concat_str = malloc(s1_len + s2_len + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	strcpy(concat_str, s1);
	strcat(concat_str, s2);
	return (concat_str);
}

