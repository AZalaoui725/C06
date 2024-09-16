#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	while(ac - 1 >= 1)
	{
		i = 0;
		while(av[ac - 1][i])	
		{
			write(1, &av[ac-1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		ac--;
	}
	
}
