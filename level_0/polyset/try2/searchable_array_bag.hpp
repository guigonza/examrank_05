/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchable_array_bag.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 20:45:32 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/29 20:51:30 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "searchable_bag.hpp"
#include "array_bag.hpp"

class searchable_array_bag : public searchable_bag, public array_bag
{
	public:
		searchable_array_bag();
		searchable_array_bag(const searchable_array_bag& other);
		searchable_array_bag &operator=(const searchable_array_bag& other);
		virtual ~searchable_array_bag();
		virtual bool has(int value ) const;
};