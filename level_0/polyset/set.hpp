/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:52:58 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/29 13:56:36 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "searchable_bag.hpp"

class set
{
	public:
		set(searchable_bag &bag) : _bag(bag){};

		bool has(int value);
		void insert(int value);
		void insert(int *arr, int size);
		void print()const;
		void clear();
		const searchable_bag &get_bag() const;
	private:
		searchable_bag &_bag;
		
};