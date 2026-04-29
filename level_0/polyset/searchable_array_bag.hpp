/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchable_array_bag.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:35:37 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/29 14:32:46 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCHABLLE_ARRAY_BAG_HPP
#define SEARCHABLLE_ARRAY_BAG_HPP

#include "array_bag.hpp"
#include "searchable_bag.hpp"

class searchable_array_bag :public searchable_bag,  public array_bag
{
	public:
		searchable_array_bag();
		searchable_array_bag(const searchable_array_bag& other);
		searchable_array_bag& operator=(const searchable_array_bag& other);
		virtual ~searchable_array_bag();
		virtual bool has(int value) const;
};
#endif