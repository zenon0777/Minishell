/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:20:27 by med-doba          #+#    #+#             */
/*   Updated: 2022/07/27 11:44:44 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mini.h"

void	ft_lstadd_back(t_lexer **lst, t_lexer *new)
{
	t_lexer *tmp;

	if (lst == NULL || *lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	tmp = *lst;
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	(*lst)->next = new;
	new->next = NULL;
	*lst = tmp;
}