/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:02:04 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/03 18:02:47 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
