/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 21:02:01 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/29 21:08:33 by guigonza         ###   ########.fr       */
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
		
		
};