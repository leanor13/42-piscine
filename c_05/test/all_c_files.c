/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:30:44 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 16:54:25 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	current;

	if (power < 0)
		return (0);
	current = 1;
	while (power > 0)
	{
		current *= nb;
		power --;
	}
	return (current);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 3));
	printf("%d\n", ft_iterative_power(2, 3));
        printf("%d\n", ft_iterative_power(2, 1));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(2, -1));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:55:52 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 16:53:06 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("of 0: %d\n", ft_is_prime(0));
        printf("of 1: %d\n", ft_is_prime(1));
        printf("of 5: %d\n", ft_is_prime(2));
        printf("of 9: %d\n", ft_is_prime(9));
	printf("previous before biggest int: %d\n", ft_is_prime(6700417));
        printf("of biggest int %d\n", ft_is_prime(2147483647));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:41:09 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 15:54:47 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sq_guess(int nb, int guess)
{
	if (guess > 46340 || nb < 1)
		return (0);
	if (guess * guess == nb)
		return (guess);
	if (guess * guess > nb)
		return (0);
	return (ft_sq_guess(nb, guess + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sq_guess(nb, 1));
}
/*
#include <stdio.h>
int     main(void)
{
        printf("of 0: %d\n", ft_sqrt(0));
        printf("of -4: %d\n", ft_sqrt(-1));
        printf("of 5: %d\n", ft_sqrt(5));
        printf("of 9: %d\n", ft_sqrt(9));
        printf("of biggest int %d\n", ft_sqrt(2147483647));
        printf("of biggest int sq (46340): %d\n", ft_sqrt(2147395600));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:01:30 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 11:16:29 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	current;

	if (nb < 0)
		return (0);
	i = 1;
	current = 1;
	while (i <= nb)
	{
		current = current * i;
		i ++;
	}
	return (current);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(10));
	printf("%d\n", ft_iterative_factorial(-3));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:28:26 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 11:38:39 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("0 number: %d\n", ft_fibonacci(0));
	printf("1 number: %d\n", ft_fibonacci(1));
	printf("10 number: %d\n", ft_fibonacci(10));
	printf("-1 number: %d\n", ft_fibonacci(-1));
	printf("-3 number: %d\n", ft_fibonacci(-3));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:39:48 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/09 20:44:47 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%d\n", ft_recursive_power(0, 0));
        printf("%d\n", ft_recursive_power(0, 3));
        printf("%d\n", ft_recursive_power(2, 3));
        printf("%d\n", ft_recursive_power(2, 1));
        printf("%d\n", ft_recursive_power(2, 0));
        printf("%d\n", ft_recursive_power(2, -1));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:56:15 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 17:21:09 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	guess;

	guess = nb;
	if (nb <= 1)
		return (2);
	if (ft_is_prime(guess) == 1)
		return (guess);
	if (guess % 2 == 0)
		return (ft_find_next_prime(guess + 1));
	return (ft_find_next_prime(guess + 2));
}
/*
#include <stdio.h>
int     main(void)
{
        printf("of 0: %d\n", ft_find_next_prime(0));
        printf("of 1: %d\n", ft_find_next_prime(1));
        printf("of 5: %d\n", ft_find_next_prime(5));
        printf("of 9: %d\n", ft_find_next_prime(9));
	printf("of -5: %d\n", ft_find_next_prime(-5));
	printf("previous before big 6700416: %d\n", ft_find_next_prime(6700416));
        printf("of biggest int: %d\n", ft_find_next_prime(2147483647));
	printf("close to biggest int %d\n", ft_find_next_prime(2147483644));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:17:28 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/09 20:32:39 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(10));
	printf("%d\n", ft_recursive_factorial(-3));
}*/
