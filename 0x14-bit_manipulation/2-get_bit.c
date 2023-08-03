#include "main.h"

/**
*get_bit - get the value of a bit at the given index
*@n: the number
*@index: index
*Return:value
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);

return ((n >> index) & 1);
}
