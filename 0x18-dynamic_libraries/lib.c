#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	return (0);
}

int _abs(int n)
{
	if (n < 0)
		return (n * -1);

	return (n);
}

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

void _puts(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);

	_putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= 48 && s[i] <= 57)
			num = num * 10 + (s[i] - '0');

		if (s[i] == ';')
			break;

		i++;
	}

	return (num * sign);
}

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (src[j])
		dest[i++] = src[j++];

	return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (j < n && src[j])
		dest[i++] = src[j++];

	return (dest);
}

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
			break;

		i++;
	}

	return (s1[i] - s2[i]);
}

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;

	return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);

		i++;
	}

	return (NULL);
}

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, count = 0;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}

			j++;
		}

		if (accept[j] == '\0')
			break;

		i++;
	}

	return (count);
}

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}

		i++;
	}

	return (NULL);
}

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;

	while (haystack[i])
	{
		j = 0;
		k = i;

		while (haystack[k] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (haystack + i);

			j++;
			k++;
		}

		i++;
	}

	return (NULL);
}


