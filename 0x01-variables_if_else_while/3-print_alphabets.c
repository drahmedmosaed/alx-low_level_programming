#include <stdio.h>
/**
 * main - aho mashyeen ya bashs
 * Return: 0
 */
int main(void)
{
	char Lower, Upper;

	Lower = 'a';
	Upper = 'A';
while (Lower <= 'z')
{
	putchar(Lower);
	Lower++;
}
while (Upper <= 'Z')
{
	putchar(Upper);
	Upper++;
}
putchar('\n');
return (0);
}
