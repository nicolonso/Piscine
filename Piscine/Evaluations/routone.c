#include <unistd.h>

void ft_pt_char(char c)
{
	write (1, &c, 1);
}

int main(int argc, char *argv[])
{ 
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_pt_char('\n');
		return (0);
	}
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
			ft_pt_char(argv[1][i] + 1);
		else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
			ft_pt_char(argv[1][i] - 25);
		else
			ft_pt_char(argv[1][i]);
		i++;
	}
	ft_pt_char('\n');
	return (0);
}