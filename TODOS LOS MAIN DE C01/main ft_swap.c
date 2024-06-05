int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}