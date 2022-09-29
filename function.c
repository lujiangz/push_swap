/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msevuk <msevuk@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:18:03 by msevuk            #+#    #+#             */
/*   Updated: 2022/09/28 11:30:50 by msevuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_function(t_list **list_a, t_list **list_b, int argc, int *array)
{
	ft_check_dup(argc, array);
	ft_check_sort(list_a, argc);
	ft_array_sort(array, argc);
	ft_getting_index(list_a, array, argc);
	ft_go_to_sort(list_a, list_b, argc);
}
