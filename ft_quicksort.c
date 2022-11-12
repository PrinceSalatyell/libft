/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <josanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:17:58 by josanton          #+#    #+#             */
/*   Updated: 2022/11/11 22:48:59 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	center_pivot(long long *numbers, int len, int pivot, int i)
{
	while (i < len)
	{
		if (i < pivot)
		{
			if (numbers[i] > numbers[pivot])
			{
				ft_swap(&numbers[i], &numbers[pivot]);
				pivot = i;
				i = 0;
			}
		}
		else if (i > pivot)
		{
			if (numbers[i] < numbers[pivot])
			{
				ft_swap(&numbers[i], &numbers[pivot]);
				pivot = i;
				i = 0;
			}
		}
		i++;
	}
	return (pivot);
}

static void	helper(long long *numbers, int len, int pivot)
{
	ft_quicksort(numbers, pivot);
	ft_quicksort(&numbers[pivot + 1], len - pivot - 1);
}

void	ft_quicksort(long long *numbers, int len)
{
	int	i;
	int	pivot;

	pivot = center_pivot(numbers, len, len / 2, 0);
	if (len <= 3)
	{
		if (len == 2 && numbers[0] > numbers[1])
			ft_swap(&numbers[0], &numbers[1]);
		else if (len == 3)
		{
			i = -1;
			while (++i < len - 1)
			{
				if (numbers[i] > numbers[i + 1])
				{
					ft_swap(&numbers[i], &numbers[i + 1]);
					i = -1;
				}
			}
		}
		return ;
	}
	else
		helper(numbers, len, pivot);
}
