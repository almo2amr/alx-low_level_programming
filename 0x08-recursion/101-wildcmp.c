#include "main.h"

/**
 * move_past_star - it repeats past asterisk
 *
 * @s2: pointer to second string that can contain WildCard
 *
 * Return: pointer past astersik
*/
char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - it converts magic into reality
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string that can contain WildCard
 *
 * Return: returns 1 if the strings can be considered identical
 *	otherwise return 0
*/
int inception(char *s1, char *s2)
{
	int t = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		t += wildcmp(s1 + 1, s2 + 1);
	t += inception(s1 + 1, s2);
		return (t);
}

/**
 * wildcmp - it is a function that compares two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string that can contain WildCard
 *
 * Return: returns 1 if the strings can be considered identical
 *	otherwise return 0
*/
int wildcmp(char *s1, char *s2)
{
	int t = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			t += wildcmp(s1 + 1, s2 + 1);
		t += inception(s1, s2);
		return (!!t);
	}
	return (0);
}
