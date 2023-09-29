/**
 * binary_to_uint - Converts a binary string to unsigned int
 * @binary: Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number or 0 if invalid
 */
unsigned int binary_to_uint(const char *binary)
{
unsigned int decimal = 0;
int length = 0, power_of_two = 1;

if (!binary)
	return (0);
for (; binary[length] != '\0'; length++)
	;
for (length--; length >= 0; length--, power_of_two *= 2)
{
	if (binary[length] != '0' && binary[length] != '1')
		return (0);
	if (binary[length] & 1)
		decimal += power_of_two;
}
return (decimal);
}
