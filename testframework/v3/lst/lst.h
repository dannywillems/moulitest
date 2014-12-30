/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 19:33:34 by yyang             #+#    #+#             */
/*   Updated: 2014/12/28 14:38:27 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H
# include <stddef.h>

typedef struct			s_lst_elem
{
	void				*data;
	struct s_lst_elem	*next;
	struct s_lst_elem	*prev;
	struct s_lst		*parent;
}						t_lst_elem;

typedef struct			s_lst
{
	size_t				len;
	struct s_lst_elem	*elems;
}						t_lst;

t_lst					*lst_init(void);
t_lst_elem				*lst_create_elem(void *data);
void					lst_push(t_lst *lst, t_lst_elem *newelem);
void					lst_pop(t_lst *lst);
size_t					lst_len(t_lst *lst);
t_lst_elem				*lst_get(t_lst *lst, size_t index);
void					lst_unshift(t_lst *lst, t_lst_elem *elem);
t_lst					*lst_map(t_lst *lst, t_lst_elem *(*f)(t_lst_elem *elem));
void					lst_iter(t_lst *lst, void (*f)(t_lst_elem	*elem));
void					lst_del(t_lst *lst, void (*delfn)());
void					lstelem_del(t_lst_elem *elem, void (*delfn)());
t_lst_elem				*lst_find(t_lst *lst, void *(*f)(void *));
size_t					lst_count(t_lst *lst, void *(*f)(void *));

void					lst__link(t_lst_elem *elem1, t_lst_elem *elem2);

#endif