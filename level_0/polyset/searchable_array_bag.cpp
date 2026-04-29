/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchable_array_bag.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:39:19 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/29 16:26:27 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "searchable_array_bag.hpp"

searchable_array_bag::searchable_array_bag(){}
searchable_array_bag::searchable_array_bag(const searchable_array_bag& other): array_bag(other){}
searchable_array_bag::~searchable_array_bag(){}
searchable_array_bag &searchable_array_bag::operator=(const searchable_array_bag& other)
{
	if (this != &other)
		array_bag::operator=(other);
	return (*this);
}
bool searchable_array_bag::has(int value) const
{
	for (int i = 0; i < size; i++)
	{
		if (data[i] == value)
			return true;
	}
	return false;
}