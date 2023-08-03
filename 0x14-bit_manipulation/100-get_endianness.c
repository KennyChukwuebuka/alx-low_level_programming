#include "main.h"

/**
 * get_endianness - Function that check multi-byte data type
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int index = 1;
	char *n = (char *) &index;

	return (*n);
	/*unioin*/
	/*{*/
		/*unsigned int i;*/
		/*unsigned char c[sizeof(unsigned int)];*/
	/*}n;*/

	/*n.i = 1;*/

	/*return ((n.i[0] == 1) ? 1 : 0);*/
}
