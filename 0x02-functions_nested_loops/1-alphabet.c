#include <main.h>
/**
 *prints_alphabet fnc that prints alphabet in lowercase
 *
 */
void print-alphabet(void)
{
	char c;
	int counter

	for (counter = 0; counter < 10; counter ++)
	{
		for (c = 'a';c < 'z';c++)
		{
		_putchar (c);
		}
	}
	_putchar('\n');
}

	
