/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 15:55:48 by yso               #+#    #+#             */
/*   Updated: 2016/07/29 15:55:53 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BTREE_H__
# define __FT_BTREE_H__

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;

#endif
