/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchable_tree_bag.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 20:57:19 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/29 21:00:16 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "searchable_tree_bag.hpp"

searchable_tree_bag::searchable_tree_bag(){}
searchable_tree_bag::searchable_tree_bag(const searchable_tree_bag& other) : tree_bag(other){}
searchable_tree_bag::~searchable_tree_bag(){}
searchable_tree_bag &searchable_tree_bag::operator=(const searchable_tree_bag& other)
{
	if (this != &other)
		tree_bag::operator=(other);
	return *this;
}

bool searchable_tree_bag::has(int value) const
{
	node *tmp = tree;

	while (tmp)
	{
		if (value == tmp->value)
			return true;
		else if (value < tmp->value)
			tmp = tmp->l;
		else
			tmp = tmp->r;
	}
	false;
}