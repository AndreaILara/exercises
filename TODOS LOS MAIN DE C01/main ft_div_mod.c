int	main(void)
{
	int	a;
	int	b;
    int div;
    int mod;
	a = 13;
	b = 2;
	div = 0;
	mod = 0;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
	


}