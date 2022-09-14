/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asumerag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:03:35 by asumerag          #+#    #+#             */
/*   Updated: 2020/11/06 17:30:33 by asumerag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list *p;

	p = *list;
	if (p)
	{
		while (p)
		{
			ft_lstdelone(p, del);
			p = p->next;
		}
	}
	*list = NULL;
}
