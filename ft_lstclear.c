/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:49:10 by khorike           #+#    #+#             */
/*   Updated: 2024/01/22 14:12:26 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list **tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = &(*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
