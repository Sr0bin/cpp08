/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:40:00 by rorollin          #+#    #+#             */
/*   Updated: 2026/10/02 17:51:57 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(void) : _max(0) {}

Span::Span(unsigned int n) : _max(n) {}

Span::Span(const Span &other) : _max(other._max), _v(other._v) {}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_max = other._max;
		_v = other._v;
	}
	return (*this);
}

Span::~Span(void) {}

void	Span::addNumber(int n)
{
	if (_v.size() >= _max)
		throw std::length_error("Span: full");
	_v.push_back(n);
}

unsigned int	Span::shortestSpan(void) const
{
	if (_v.size() < 2)
		throw std::logic_error("Span: need at least 2 numbers");
	std::vector<int>	sorted(_v);
	std::sort(sorted.begin(), sorted.end());

	unsigned int	shortest = static_cast<unsigned int>(sorted[1])
		- static_cast<unsigned int>(sorted[0]);
	for (std::vector<int>::size_type i = 2; i < sorted.size(); i++)
	{
		unsigned int	gap = static_cast<unsigned int>(sorted[i])
			- static_cast<unsigned int>(sorted[i - 1]);
		shortest = std::min(shortest, gap);
	}
	return (shortest);
}

unsigned int	Span::longestSpan(void) const
{
	if (_v.size() < 2)
		throw std::logic_error("Span: need at least 2 numbers");
	int	low = *std::min_element(_v.begin(), _v.end());
	int	high = *std::max_element(_v.begin(), _v.end());
	return (static_cast<unsigned int>(high) - static_cast<unsigned int>(low));
}
