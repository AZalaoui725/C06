#include <unistd.h>

int main(int ac, char	**av)
{
	int i;
	int x;

	i = 0;
	x = 1; 
	while(ac - 1 >= x)
	{
		i = 0;
		while(av[x][i])
		{
			write(1, &av[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x++;
	}
}	
