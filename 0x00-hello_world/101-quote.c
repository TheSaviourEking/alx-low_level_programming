#include <unistd.h>
#define STDERR 2
/**
*main - prints exactly "and that place of art is useful"
* - Dora Korgar, 2015-10-19",
*followed by a new line, to the standard error.
*Return: Always 1(Not Success)
*/
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR, msg, sizeof(msg) - 1);
return (1);
}
