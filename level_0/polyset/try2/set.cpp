/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 21:00:32 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/30 08:28:23 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.hpp"


set::set(searchable_bag& bag) : _bag(bag) {}

set::set(const set& other) : _bag(other._bag) {}
set::~set(){}

set& set::operator=(const set& other)
{
	(void)other;
	return *this;
}
void set::insert(int value)
{
	_bag.insert(value);
}
void set::insert(int *arr, int size)
{
	_bag.insert(arr, size);
}
void set::print() const
{
	_bag.print();
}
void set::clear()
{
	_bag.clear();
}
bool set::has(int value) const
{
	return _bag.has(value);
}

const searchable_bag &set::get_bag() const
{
	return _bag;
}