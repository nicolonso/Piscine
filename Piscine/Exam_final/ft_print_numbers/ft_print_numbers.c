#include <unistd.h>

int main(void)
{
	write (1, &"0123456789", 10);
	write (1, &"\n", 1);
}