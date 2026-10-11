#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rush(int x, int y)
{
	int colonne;
	int ligne ;
	ligne = 1;
	while (ligne <= y)
	{	
		colonne = 1;
		while (colonne <= x)
		{
			if ((ligne == 1 || ligne == y) && (colonne == 1 || colonne == x))
			{
				ft_putchar('o');
			}		
			else if (ligne == 1 || ligne == y)
			{
				ft_putchar('-');
			}
			else if (colonne == 1 || colonne == x)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
		colonne++;		
		}
	ft_putchar('\n');	
	ligne++;	
	}
}
int	main(void)
{
	rush(20, 5);
	return (0);
}
