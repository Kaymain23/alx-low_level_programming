#include "main.h"
/**
* checks character is in lowercase
*@c: character to be verified
*Return: return 1 is lower case 0 otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);

