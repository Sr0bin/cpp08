/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:40:00 by rorollin          #+#    #+#             */
/*   Updated: 2026/10/02 17:37:17 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iterator>
# include <stdexcept>

class Span
{
	private:
		unsigned int		_max;
		std::vector<int>	_v;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span &other);
		Span	&operator=(const Span &other);
		~Span(void);

		void	addNumber(int n);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		template <typename It>
		void	addRange(It begin, It end)
		{
			if (static_cast<std::vector<int>::size_type>(std::distance(begin, end))
				> _max - _v.size())
				throw std::length_error("Span: not enough space");
			_v.insert(_v.end(), begin, end);
		}
};

#endif
