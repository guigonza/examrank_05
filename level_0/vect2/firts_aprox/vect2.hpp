/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:51:06 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/13 12:55:15 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECT2_HPP
#define VECT2_HPP

#include <cmath>
#include <iostream>
#include <string>

class vect2
{
	private:
		int	y;
		int x;
	public:
	//forma canónica ortodoxa
		vect2();
		vect2(int x, int y);
		vect2(const vect2& other);
		vect2& operator=(const vect2& other);
		~vect2();
	
		int operator[](int index) const;
		int& operator[](int index);

		vect2& operator++();
		vect2& operator++(int);

		vect2& operator--();
		vect2& operator--(int);

		vect2& operator+=(const vect2& to_sum);
		vect2& operator-=(const vect2& to_rest);
		
		vect2& operator*=(int to_mult);
		vect2 operator*(int to_mult) const ;
		
		vect2 operator+(const vect2& to_sum) const;
		vect2 operator-(const vect2& to_rest) const;
		vect2 operator-() const;
		
		bool operator!=(const vect2&  no) const;
		bool operator==(const vect2& yes) const;
		
		
};

std::ostream& operator<<(std::ostream& out, const vect2& to_print);
vect2 operator*(int num, const vect2& to_mult);

#endif