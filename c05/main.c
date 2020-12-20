#include <stdio.h>

int	ft_iterative_power(int nb, int power);
int	ft_recursive_power(int nb, int power);
int	ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

int main()
{
	 printf("%d\n", ft_iterative_power(2, 18));
	 printf("%d\n", ft_recursive_power(2, 18));
	 printf("%d\n", ft_fibonacci(-7));
	 printf("%d\n", ft_sqrt(-225));
	 printf("%d\n", ft_is_prime(227));
	 printf("%d", ft_find_next_prime(152));
}
