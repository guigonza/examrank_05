/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigonza <guigonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:55:31 by guigonza          #+#    #+#             */
/*   Updated: 2026/04/30 09:10:50 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vect2.hpp"

vect2::vect2()
{
	this->x = 0;
	this->y = 0;
}
vect2::vect2(int x, int y)
{
	this->x = x;
	this->y = y;
}
vect2::vect2(const vect2& other)
{
	x = other.x;
	y = other.y;
}

vect2::~vect2(){}

vect2& vect2::operator=(const vect2& other)
{
	 if (this != &other)
	 {
		x = other.x;
		y = other.y;
	 }
	 return *this;
}
int& vect2::operator[](int index)
{
	if (index == 0)
		return x;
	else
		return y;
}
int vect2::operator[](int index) const
{
	if (index == 0)
		return x;
	else
		return y;

}
vect2& vect2::operator++()
{
	x++;
	y++;
	return *this;
}
vect2 vect2::operator++(int)
{
	vect2 tmp = *this;
	x++;
	y++;
	return tmp;
}
vect2& vect2::operator--()
{
	x--;
	y--;
	return *this;
}
vect2 vect2::operator--(int)
{
	vect2 tmp = *this;
	x--;
	y--;
	return tmp;
}
vect2& vect2::operator+=(const vect2& to_sum)
{
	x += to_sum.x;
	y+= to_sum.y;
	return *this;
}
vect2& vect2::operator-=(const vect2& to_rest)
{
	x -= to_rest.x;
	y-= to_rest.y;
	return *this;
}
vect2& vect2::operator*=(int to_mult)
{
	x *= to_mult;
	y *= to_mult;
	return *this;
}
vect2 vect2::operator*(int to_mult) const
{
	vect2 tmp = *this;
	tmp.x = x * to_mult;
	tmp.y = y * to_mult;
	return tmp;
}

vect2 vect2::operator+(const vect2& to_sum)   const
{
	vect2 tmp = *this;
	tmp.x += to_sum.x;
	tmp.y += to_sum.y;
	return tmp;
}
vect2 vect2::operator-(const vect2& to_rest)   const
{
	vect2 tmp = *this;
	tmp.x += to_rest.x;
	tmp.y += to_rest.y;
	return tmp;
}
vect2 vect2::operator-() const
{
	
	vect2 tmp = *this;

	tmp.x *= -1;
	tmp.y *= -1;
	return tmp;
}

bool vect2::operator==(const vect2& yes) const 
{
	if (x == yes.x && y == yes.y)
		return true;
	return false;
}
bool vect2::operator!=(const vect2& no) const 
{
	if (x != no.x && y != no.y)
		return true;
	return false;
}

vect2 operator*(int num, const vect2&  to_mult)
{
	vect2 tmp(to_mult);
	tmp *= num;
	return tmp;
}

std::ostream& operator<<(std::ostream& out, const vect2& to_print)
{
	out  << "{" << to_print[0] << ", " << to_print[1] << "}" << std::endl;
	return out;	
}
