#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rush(int x, int y)
{
	int row;
	int lig ;
	lig = 1;
	while (lig <= y)
	{	
		row = 1;
		while (row <= x)
		{
			if ((lig == 1 || lig == y) && (row == 1 || row == x))
			{
				ft_putchar('o');
			}		
			else if (lig == 1 || lig == y)
			{
				ft_putchar('-');
			}
			else if (row == 1 || row == x)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
		row++;		
		}
	ft_putchar('\n');	
	lig++;	
	}
}

