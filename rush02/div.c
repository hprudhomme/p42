int *ftdiv(int *tab, int nb)
{
	long int nb2;
	int i;
	int nbr;
	int j;
	int n;

	nb2 = nb;
	i = 0;
	n = 1;
	j = 1000;
	while (nb2 >= 100)
	{	
		tab[i] = nb2 % j;
		nb2 = nb2 - tab[i];
		nb2 = nb2 / j;
		i++;
	}
	return (tab);
}

int	ft_number(int *tab)
{
	int i;
		
	i = 10;
	while (nbr > 0)
	{
	}
}

int main()
{
	int i;
	int i
	**tab;

	i = 145689733;
	printf("%d\n", ftdiv(tab, i)[0]);
	printf("%d\n", ftdiv(tab, i)[1]);
	printf("%d\n", ftdiv(tab, i)[2]);
}
