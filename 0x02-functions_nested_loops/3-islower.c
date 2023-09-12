/*
 *function is lower checks if a character is lowercase
 returns  1 if it is and 0 if it isn't
 * */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
