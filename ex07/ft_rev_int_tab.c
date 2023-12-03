/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:02:04 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/03 16:14:08 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*start;
	int	*end;
	int	tmp;

	start = tab;
	end = tab + size -1;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		++start;
		--end;
	}
}

int	main(void)
{
	int	x, y = 0;
	int	lst[6] = {1, 2, 3, 4, 5, 6};

	printf("tab: ");
	for (x = 0; x < 6; ++x)
	{
		printf("%d ", lst[x]);
	}
	printf("\n");

	ft_rev_int_tab(lst, 6);

	printf("rev: ");
	for (y = 0; y < 6; ++y)
	{
		printf("%d ", lst[y]);
	}
	printf("\n");
}
