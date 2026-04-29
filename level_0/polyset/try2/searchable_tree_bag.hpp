/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchable_tree_bag.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 20:51:43 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/29 20:52:28 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "searchable_bag.hpp"
#include "tree_bag.hpp"

class searchable_tree_bag : public searchable_bag, public tree_bag
{
	public:
		searchable_tree_bag();
		searchable_tree_bag(const searchable_tree_bag& other);
		searchable_tree_bag &operator=(const searchable_tree_bag& other);
		virtual ~searchable_tree_bag();
		virtual bool has(int value ) const;
};