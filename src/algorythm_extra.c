/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythm_extra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wurrigon <wurrigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 04:46:28 by wurrigon          #+#    #+#             */
/*   Updated: 2021/12/31 02:49:13 by wurrigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list **head)
{
	int		min_val;
	t_list	*current;

	current = *head;
	min_val = INT_MAX;
	while (current != NULL)
	{
		if (current->data <= min_val)
		{
			min_val = current->data;
		}
		current = current->next;
	}
	return (min_val);
}

int	find_max(t_list *head)
{
	int		max_val;
	t_list	*found;

	max_val = INT_MIN;
	while (head != NULL)
	{
		if (head->data >= max_val)
		{
			max_val = head->data;
			found = head;
		}
		head = head->next;
	}
	return (found->i);
}

void	init_info_struct(t_info **group)
{
	*group = (t_info *)malloc(sizeof(t_list));
	if (!(*group))
		fatal_error(MEM_ERR);
	(*group)->max_one = 0;
	(*group)->max_two = 0;
	(*group)->max_three = 0;
}
