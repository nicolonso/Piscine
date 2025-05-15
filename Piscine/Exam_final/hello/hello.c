#include <unistd.h>

int main (void)
{
	write (1, &"Hello world!\n", 13);
	//write (1, &"\n", 1);
}