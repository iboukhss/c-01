/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:14:39 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/03 18:01:22 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
