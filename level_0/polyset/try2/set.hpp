/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 21:02:01 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/30 08:20:19 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "searchable_bag.hpp"
class set 
{
	private:
		searchable_bag &_bag;
		set();
	public:
		set(searchable_bag& bag);
		set(const set& other);
		set& operator=(const set& other);
		virtual ~set();

		void insert(int value);
		void insert(int *arr, int size);
		void print() const;
		void clear();
		bool has(int value) const;
		const searchable_bag& get_bag()const;
		
};