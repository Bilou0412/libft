#include"libft.h"

void	put_str(int n,char *str,int i)
{
	unsigned int nbr;

	nbr = (unsigned int)n;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		str[i++] = '-';
	}
	if (nbr > 9)
	{
		put_str(nbr / 10, str, i);
		put_str(nbr % 10, str, i);
	}
	if (nbr <= 9)
	{
		str[i] = nbr + 48;
	}
}

char	*ft_itoa(int n)
{
	int	n_of_char;
	char	*str;
	int	nb;
	int	i;
	
	i = 0;
	nb = n;
	n_of_char = 0;
	while(1 < nb)
	{
		nb = nb / 10;
		n_of_char++;
	}
	str = malloc((n_of_char + 1) * sizeof(char));
	if (!str)
		return (0);
	put_str(n, str, i);
	return (str);
}

int	main()
{
	char *str = ft_itoa(12354687);
	printf("%s",str);
}
