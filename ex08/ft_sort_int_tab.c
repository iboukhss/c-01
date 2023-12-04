/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:14:39 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/03 16:16:56 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*curr;
	int	*next;
	int	swaps;
	int	i;

	swaps = 1;
	while (swaps > 0)
	{
		i = 0;
		swaps = 0;
		while (i < size - 1)
		{
			curr = tab + i;
			next = curr + 1;
			if (*curr > *next)
			{
				ft_swap(curr, next);
				++swaps;
			}
			++i;
		}
	}
}

int	main(void)
{
	int	lst[6] = {9, 2, 1, 4, 98, 30};
	int	i, j = 0;

	printf("array:  ");
	for (i = 0; i < 6; ++i)
	{
		printf("%4d", lst[i]);
	}
	printf("\n");

	ft_sort_int_tab(lst, 6);

	printf("sorted: ");
	for (j = 0; j < 6; ++j)
	{
		printf("%4d", lst[j]);
	}
	printf("\n");
}
