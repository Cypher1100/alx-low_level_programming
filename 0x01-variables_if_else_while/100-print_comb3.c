/**
 * main - prints all possible different combinations of two digits
 * Description: using the main function
 * this code prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)

{
int x, y;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
if (y > x)
{
	putchar(x + '0');
	putchar(y + '0');
if (x != 8)
{
	putchar(',');
	putchar('');
}
}
}
}
putchar("\n");
return (0);
}
